nasm -f win64 filename.asm -o filename.o

link /ENTRY:main /MACHINE:X64 /NODEFAULTLIB /SUBSYSTEM:CONSOLE filename.o

objdump -d filename.exe > objdump

https://vividmachines.com/shellcode/odfhex.cpp
Compilation - g++ odfhex.cpp -o shellcodegen
./shellcodegenerator objdump
