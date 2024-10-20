/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_print_hex_chars.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

void my_print_hex_chars(char const *str, int size, int i)
{
    for (int j = 0; j < 16 && i + j < size; j++) {
        if (j % 2 == 0)
            my_putchar(' ');
        my_putchar("0123456789ABCDEF"[((str[i + j] & 0xF0) >> 4)]);
        my_putchar("0123456789ABCDEF"[(str[i + j] & 0x0F)]);
    }
}
