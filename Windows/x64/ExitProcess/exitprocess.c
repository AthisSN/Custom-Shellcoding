section .text

        global main

main:
        mov rcx, 0 ; uExitCode = 0
        mov r15, 0x7FF8E65018A04242 ; Address of ExitProcess (Static)
        shr r15, 8 
        call r15
