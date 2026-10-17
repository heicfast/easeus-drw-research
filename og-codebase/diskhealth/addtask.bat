@echo off
chcp 437
schtasks.exe /create /f /sc ONLOGON /rl HIGHEST /tn %1 /tr %2