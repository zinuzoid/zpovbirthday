#include "data.h"

#define LedCharSize 52

static const uint8_t LedBlank[5]={0,0,0,0,0};

static const uint8_t LedChar[LedCharSize][5] PROGMEM={
{0b01111111,0b10001000,0b10001000,0b10001000,0b01111111},  //A1
{0b11111111,0b10010001,0b10010001,0b10010001,0b01101110},  //B2
{0b01111110,0b10000001,0b10000001,0b10000001,0b01000010},  //C3
{0b11111111,0b10000001,0b10000001,0b01000010,0b00111100},  //D4
{0b11111111,0b10010001,0b10010001,0b10010001,0b10000001},  //E5
{0b11111111,0b10010000,0b10010000,0b10010000,0b10000000},  //F6
{0b01111110,0b10000001,0b10001001,0b10001001,0b01001110},  //G7
{0b11111111,0b00010000,0b00010000,0b00010000,0b11111111},  //H8
{0b10000001,0b10000001,0b11111111,0b10000001,0b10000001},  //I9
{0b00000110,0b00000001,0b00000001,0b00000001,0b11111110},  //J10
{0b11111111,0b00011000,0b00100100,0b01000010,0b10000001},  //K11
{0b11111111,0b00000001,0b00000001,0b00000001,0b00000001},  //L12
{0b11111111,0b01000000,0b00110000,0b01000000,0b11111111},  //M13
{0b11111111,0b01000000,0b00110000,0b00001000,0b11111111},  //N14
{0b01111110,0b10000001,0b10000001,0b10000001,0b01111110},  //O15
{0b11111111,0b10001000,0b10001000,0b10001000,0b01110000},  //P16
{0b01111110,0b10000001,0b10000101,0b10000010,0b01111101},  //Q17
{0b11111111,0b10001000,0b10001100,0b10001010,0b01110001},  //R18
{0b01100001,0b10010001,0b10010001,0b10010001,0b10001110},  //S19
{0b10000000,0b10000000,0b11111111,0b10000000,0b10000000},  //T20
{0b11111110,0b00000001,0b00000001,0b00000001,0b11111110},  //U21
{0b11110000,0b00001100,0b00000011,0b00001100,0b11110000},  //V22
{0b11111111,0b00000010,0b00001100,0b00000010,0b11111111},  //W23
{0b11000011,0b00100100,0b00011000,0b00100100,0b11000011},  //X24
{0b11100000,0b00010000,0b00001111,0b00010000,0b11100000},  //Y25
{0b10000011,0b10000101,0b10011001,0b10100001,0b11000001},  //Z26
{0b00000110,0b00101001,0b00101001,0b00101001,0b00011111},  //a27
{0b11111111,0b00001001,0b00010001,0b00010001,0b00001110},  //b28
{0b00011110,0b00100001,0b00100001,0b00100001,0b00010010},  //c29
{0b00001110,0b00010001,0b00010001,0b00001001,0b11111111},  //d30
{0b00001110,0b00010101,0b00010101,0b00010101,0b00001100},  //e31
{0b00001000,0b01111111,0b10001000,0b10000000,0b01000000},  //f32
{0b00110000,0b01001001,0b01001001,0b01001001,0b01111110},  //g33
{0b11111111,0b00001000,0b00010000,0b00010000,0b00001111},  //h34
{0b00000000,0b00000000,0b01011111,0b00000000,0b00000000},  //i35
{0b00000010,0b00000001,0b00100001,0b10111110,0b00000000},  //j36
{0b11111111,0b00000100,0b00001010,0b00010001,0b00000000},  //k37
{0b00000000,0b10000001,0b11111111,0b00000001,0b00000000},  //l38
{0b00111111,0b00100000,0b00011000,0b00100000,0b00011111},  //m39
{0b00111111,0b00010000,0b00100000,0b00100000,0b00011111},  //n40
{0b00001110,0b00010001,0b00010001,0b00010001,0b00001110},  //o41
{0b00111111,0b00100100,0b00100100,0b00100100,0b00011000},  //p42
{0b00010000,0b00101000,0b00101000,0b00011000,0b00111111},  //q43
{0b00011111,0b00001000,0b00010000,0b00010000,0b00001000},  //r44
{0b00001001,0b00010101,0b00010101,0b00010101,0b00000010},  //s45
{0b00100000,0b11111110,0b00100001,0b00000001,0b00000010},  //t46
{0b00011110,0b00000001,0b00000001,0b00000010,0b00011111},  //u47
{0b00011100,0b00000010,0b00000001,0b00000010,0b00011100},  //v48
{0b00011110,0b00000001,0b00001110,0b00000001,0b00011110},  //w49
{0b00010001,0b00001010,0b00000100,0b00001010,0b00010001},  //x50
{0b00000000,0b00111001,0b00000101,0b00000101,0b00111110},  //y51
{0b00010001,0b00010011,0b00010101,0b00011001,0b00010001}   //z52

};
