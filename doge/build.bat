rc doge.rc
cl doge.c doge.res kernel32.lib user32.lib /O2 /MD /link /nodefaultlib /entry:WinMain /align:16 /emitpogophaseinfo /subsystem:windows 
