#pragma output CRT_ORG_CODE = 0x8000
#include "tk80.h"

void main(void)
{
    cls();
    while(1){
        for(int i=0;i<8;i++){
            put_char(i,char_A);
            sleep(200);
            put_char(i,char_SPACE);
        }
    }
}