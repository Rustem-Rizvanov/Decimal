#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H



#include <cstdint>
#include <stdio.h>


typedef struct 
{
    int bits[4];
} s21_decimal;


typedef struct {
    int bits[8];
} s21_big_decimal;


typedef union decimal_bit3 {

    int i; // 0 - 31

    struct {
        uint32_t empty1 : 16; // 0 - 15
        uint32_t scale : 8;  // 16 - 23
        uint32_t empty2 : 7; // 24 - 30
        uint32_t sign : 1;  // 31
    } parts;
} decimal_bit3;



#endif S21_DECIMAL_H