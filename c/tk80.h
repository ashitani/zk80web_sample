#ifndef __TK80_H
#define __TK80_H

void put_char(char index, char character);
void cls();
void wait_27msec();
void sleep(long t);

#define char_A 0b01110111  // A
#define char_B 0b01111100  // B
#define char_C 0b01011000  // C
#define char_D 0b01011110  // D
#define char_E 0b01111001  // E
#define char_F 0b01110001  // F
#define char_G 0b00111101  // G
#define char_H 0b01110100  // H
#define char_I 0b00000100  // I
#define char_J 0b00011110  // J
#define char_K 0b01110101  // K
#define char_L 0b00111000  // L
#define char_M 0b00110111  // M
#define char_N 0b01010100  // N
#define char_O 0b01011100  // O
#define char_P 0b01110011  // P
#define char_Q 0b01100111  // Q
#define char_R 0b01010000  // R
#define char_S 0b01101100  // S
#define char_T 0b01111000  // T
#define char_U 0b00011100  // U
#define char_V 0b00111110  // V
#define char_W 0b01111110  // W
#define char_X 0b01110110  // X
#define char_Y 0b01101110  // Y
#define char_Z 0b00011011  // Z
#define char_0 0b00111111  // 0
#define char_1 0b00000110  // 1
#define char_2 0b01011011  // 2
#define char_3 0b01001111  // 3
#define char_4 0b01100110  // 4
#define char_5 0b01101101  // 5
#define char_6 0b01111101  // 6
#define char_7 0b00100111  // 7
#define char_8 0b01111111  // 8
#define char_9 0b01101111  // 9
#define char_SPACE 0

#endif
