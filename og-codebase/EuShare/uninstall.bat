@echo off
setlocal enabledelayedexpansion

sc stop EuMrx
sc delete EuMrx

del /f /q "%systemroot%\system32\DRIVERS\EuMrx.sys"

set find=0
for /f "tokens=3*" %%i in ('reg query HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\NetworkProvider\Order /v Providerorder^|findstr Providerorder') do (
	set value=%%i
	set find=1
)

if %find% equ 0 (
	goto success
)

set newvalue=
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

if "%provider%"!=="%name%" (
	set newvalue=%newvalue%
) else if "%newvalue%"=="" (
	set newvalue=%provider%
) else (
	set newvalue=%newvalue%,%provider%
)

set /a b=%e%+1
goto find_provider_begin
:find_provider_end

reg add HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\NetworkProvider\Order /v Providerorder /t REG_SZ /f /d %newvalue%
goto success

:failed
echo uninstall failed!!!
goto end

:success
echo uninstall sucess!!!
goto end

:end
