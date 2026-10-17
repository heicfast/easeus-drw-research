@echo off
setlocal enabledelayedexpansion

reg add HKLM\SYSTEM\CurrentControlSet\Services\EuMrx /f /v LastLoadStatus /t REG_DWORD /d 0x00000000
reg add HKLM\SYSTEM\CurrentControlSet\Services\EuMrx\Parameters /f /v LogRate /t REG_DWORD /d 0x0000000f
reg add HKLM\SYSTEM\CurrentControlSet\Services\EuMrx\NetworkProvider /f /v DeviceName /t REG_SZ /d "\Device\EuRdr"
reg add HKLM\SYSTEM\CurrentControlSet\Services\EuMrx\NetworkProvider /f /v Name /t REG_SZ /d "EaseUS Network"
reg add HKLM\SYSTEM\CurrentControlSet\Services\EuMrx\NetworkProvider /f /v ProviderPath /t REG_SZ /d "System32\EuMrxnp.dll"

sc create EuMrx binPath= "system32\DRIVERS\EuMrx.sys" type= filesys start= demand error= normal group= Network DisplayName= EuMrx
sc description EuMrx "MiniMrx Driver"

copy /Y "%~dp0EuMrx.sys" "%systemroot%\system32\DRIVERS"

set find=0
for /f "tokens=3*" %%i in ('reg query HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\NetworkProvider\Order /v Providerorder^|findstr Providerorder') do (
	set value=%%i
	set find=1
)

if %find% equ 0 (
	goto failed
)

set name=EuMrx
set /a b=0
set /a e=0

:find_provider_begin

for /l  %%i in (%b%,1,1024) do (
	set /a e=%%i
	if "!value:~%%i,1!"=="," (
		goto find_provider
	)
)

:find_provider
if %b% gtr %e% goto find_provider_end

set /a l=%e%-%b%
set provider=!value:~%b%,%l%!

if "%provider%"=="%name%" (
	goto success
)

set /a b=%e%+1
goto find_provider_begin
:find_provider_end

set newvalue=EuMrx,%value%
reg add HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\NetworkProvider\Order /v Providerorder /t REG_SZ /f /d %newvalue%
goto success

:failed
echo install failed!!!
goto end

:success
echo install sucess!!!
goto end

:end
