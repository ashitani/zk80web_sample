#include "tk80.h"

void put_char(char index, char character)  __z88dk_fastcall __naked{
    #asm
    ld ix,2
    add ix, sp

    ld h, 0
    ld l, (ix+2)    ; index
    ld a, (ix)      ; character

    ld bc, 0x83f8
    add hl, bc
    ld (hl), a
    ret
    #endasm
};

void cls()__z88dk_fastcall {
    for(int i=0;i<8;i++){
        put_char(i,char_SPACE);
    }
}

void wait_27msec()__z88dk_fastcall __naked{
    #asm
    call 0x2ef
    ret
    #endasm
}

void sleep(long t) __z88dk_fastcall{
    // t [msec] wait
    // very bad accuracy...
    for(long i=0;i<(t>>5);i++){
        wait_27msec();
    }
}
