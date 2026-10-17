x:
cd "x:\program files\other\explorer"

regedit /s ExplorerTaskBar-HKCU.reg
regedit /s ExplorerTaskBar-HKLM.reg
call ExplorerTaskBar-HKLM-CLSIDs.bat


regedit /s del-network.reg

rem disable Open Containing Folder Menu
regedit /s openfile.reg

rem powershell
regedit /s powershell.reg
rem timedate
regedit /s timedate.reg

rem chrome file type
regedit /s filetype.reg


rem copy
regedit /s CLSID_DBFolderBoth.reg

rem address
regedit /s address.reg
regedit /s address1.reg
regedit /s address2.reg
regedit /s navigation.reg

regedit /s filemgmt1.reg

rem search
regedit /s searchall.reg
regedit /s query.reg

rem mmc
rem regedit /s clsid.reg
rem regedit /s ie-version.reg
regedit /s clsid-mmc.reg
regedit /s clsid-mmc2.reg
regedit /s mmc.reg

regsvr32 /s x:\windows\system32\mmcndmgr.dll
regsvr32 /s x:\windows\system32\devmgr.dll
regsvr32 /s x:\windows\system32\dmdskmgr.dll
regsvr32 /s x:\windows\system32\dmocx.dll
regsvr32 /s x:\windows\system32\dmdlgs.dll
regsvr32 /s x:\windows\system32\dmview.ocx
regsvr32 /s x:\windows\system32\mmcshext.dll
regsvr32 /s x:\windows\system32\filemgmt.dll

rem  manage menu
regsvr32 /s x:\windows\system32\mycomput.dll

regedit /s msc.reg
regedit /s msc1.reg

regedit /s cpl.reg
regedit /s cpl2.reg

regedit /s IExplorerHost.reg
regedit /s desktop.reg

regedit /s Cortana.reg
regedit /s search.reg

regedit /s txt.reg
regedit /s display.reg

regedit /s folder.reg

regedit /s Properties.reg
regedit /s navpane.reg

mkdir "x:\ProgramData\Microsoft\Windows\Start Menu\Programs\Administrative Tools"

mkdir x:\windows\system32\config\systemprofile\microsoft
mkdir x:\windows\system32\config\systemprofile\microsoft\mmc
mkdir x:\windows\system32\config\systemprofile\microsoft\diskmgmt
mkdir "x:\windows\system32\config\systemprofile\3D Objects"

"x:\program files\Other\Tools\createshort.exe" "x:\windows\system32\compmgmt.msc" "x:\ProgramData\Microsoft\Windows\Start Menu\Programs\Administrative Tools\Computer Management.lnk" "x:\windows\system32" "/s"

del /f /A:H X:\Users\Default\desktop\desktop.ini 
del /f /A:H X:\Users\Public\desktop\desktop.ini

rem copy /y "x:\program files\other\explorer\winxshell.exe" x:\windows\explorer.exe 

"x:\program files\Other\Tools\launch.exe" 0 "x:\program files\Other\PENetwork\PENetwork.exe" 

start x:\windows\explorer.exe -winpe
ping -n 2 127.0.0.1

"x:\program files\Other\Tools\launch.exe" 1 "x:\program files\Other\Tools\changeres.exe" trayicon


ping -n 2 127.0.0.1
"x:\program files\Other\Tools\createshort.exe" "x:\windows\system32\diskmgmt.msc" "X:\Users\Default\desktop\Disk Manager.lnk" "x:\windows\system32"
ping -n 2 127.0.0.1
"x:\program files\Other\Tools\createshort.exe" "x:\windows\system32\devmgmt.msc" "X:\Users\Default\desktop\Device Manager.lnk" "x:\windows\system32"
ping -n 2 127.0.0.1
"x:\program files\Other\Tools\createshort.exe" "x:\program files\Other\Tools\ChangeKeyboardLayout.cmd" "X:\Users\Default\desktop\Change Keyboard Layout.lnk" "x:\program files\Other\Tools\"
ping -n 2 127.0.0.1
"x:\program files\Other\Tools\createshort.exe" "x:\program files\Other\PENetwork\PENetwork.exe" "X:\Users\Default\desktop\PENetwork.lnk" "x:\program files\Other\PENetwork"

ping -n 2 127.0.0.1
for /F "tokens=2*" %%a in ('reg query "HKEY_LOCAL_MACHINE\SOFTWARE\EASEUS\EPM\Version" /v OEM') do (
    set "ismainland=%%b"
)

echo %ismainland% | findstr /B /I "Mainland" >nul && (
  copy  /Y "x:\program files\Other\lnk\*.lnk" x:\Users\Default\Desktop\
)  ||  (
    "x:\program files\Other\Tools\createshort.exe" "x:\program files\EaseUS\DRW\DRW.exe" "X:\Users\Default\desktop\Data Recovery Wizard.lnk" "x:\program files\EaseUS\DRW"    
)




rem ping -n 2 127.0.0.1
rem "x:\program files\Other\Tools\createshort.exe" "x:\program files\easeus\epm\PasswordReset\PasswordReset.exe" "X:\Users\Default\desktop\Password Reset.lnk" "x:\program files\easeus\epm\bin"
ping -n 2 127.0.0.1
"x:\program files\Other\Tools\createshort.exe" "x:\program files\easeus\BootRepair\BootRepair.exe" "X:\Users\Default\desktop\Boot Repair.lnk" "x:\program files\easeus\BootRepair"

for /f %%i in ('""x:\program files\Other\Tools\GetDriver.exe""') do set bootdrive=%%i
IF  DEFINED bootdrive  (
    

reg add HKEY_CLASSES_ROOT\jpegfile\shell\open\command /ve          /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -app=\"%%1\""  /f
reg add HKEY_CLASSES_ROOT\pngfile\shell\open\command /ve           /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -app=\"%%1\""  /f
reg add HKEY_CLASSES_ROOT\Paint.Picture\shell\open\command /ve /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -app=\"%%1\""  /f
reg add HKEY_CLASSES_ROOT\giffile\shell\open\command /ve             /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -app=\"%%1\""  /f
reg add HKEY_CLASSES_ROOT\icofile\shell\open\command /ve             /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -app=\"%%1\""  /f
reg add HKEY_CLASSES_ROOT\pdffile\shell\open\command /ve             /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -app=\"%%1\""  /f
reg add HKEY_CLASSES_ROOT\htmlfile\shell\open\command /ve          /d "\"%bootdrive%\Tools\\Google Chrome\\chrome.exe\" -no-default-browser-check --simulate-outdated-no-au=1 \"%%1\""  /f


    IF EXIST "%bootdrive%Tools\DiskHealth\bin\DiskInfo.exe"  (
               mkdir x:\tools\DiskHealth
               copy "%bootdrive%Tools\DiskHealth\bin\api*.*" x:\tools\DiskHealth /y
               copy "%bootdrive%Tools\DiskHealth\bin\aliyun*.*" x:\tools\DiskHealth /y
	ping -n 2 127.0.0.1
	"x:\program files\Other\Tools\createshort.exe" "%bootdrive%Tools\DiskHealth\bin\DiskInfo.exe" "X:\Users\Default\desktop\Disk Health.lnk" "%bootdrive%Tools\DiskHealth\bin"
    )

 IF EXIST "%bootdrive%Tools\DiskMark\bin\DiskMarkUI.exe"  (
	mkdir x:\tools\DiskMark
               copy "%bootdrive%Tools\DiskMark\bin\api*.*" x:\tools\DiskMark /y
               copy "%bootdrive%Tools\DiskMark\bin\aliyun*.*" x:\tools\DiskMark /y
	ping -n 2 127.0.0.1
	"x:\program files\Other\Tools\createshort.exe" "%bootdrive%Tools\DiskMark\bin\DiskMarkUI.exe" "X:\Users\Default\desktop\Disk Mark.lnk" "%bootdrive%Tools\DiskMark\bin"
)

IF EXIST "%bootdrive%Tools\Google Chrome\chrome.exe"  (
	ping -n 2 127.0.0.1
	"x:\program files\Other\Tools\createshort.exe" "%bootdrive%Tools\Google Chrome\chrome.exe" "X:\Users\Default\desktop\Google Chrome.lnk" "%bootdrive%Tools\Google Chrome" "-no-default-browser-check --simulate-outdated-no-au=1"
)
ping -n 2 127.0.0.1
"x:\program files\Other\Tools\createshort.exe" "x:\program files\Other\tools\How to access shared folder.jpg" "X:\Users\Default\desktop\How to access shared folder.lnk"
"x:\program files\Other\Tools\createshort.exe" "x:\program files\Other\tools\How to connect to Wi-Fi.jpg" "X:\Users\Default\desktop\connect to Wi-Fi.lnk"

)




del  /Q /F "x:\program files\other\explorer\*.reg"
del  /Q /F "x:\program files\other\explorer\*.bat"


