@echo off
mkdir bin
mkdir obj
cl src/create_icon.c /O2 /MD /Fo:obj/create_icon.obj /Fe:bin/create_icon.exe
bin\create_icon
rc /fo obj/doge.res src/doge.rc
cl src/doge.c obj/doge.res kernel32.lib user32.lib /O2 /MD /Fo:obj/doge.obj /Fe:bin/doge.exe /link /nodefaultlib /entry:WinMain /align:16 /emitpogophaseinfo /subsystem:windows
del obj\create_icon.obj
del bin\create_icon.exe