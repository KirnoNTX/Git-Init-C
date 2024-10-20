/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_print_mem_address.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

void my_print_mem_address(unsigned long long addr)
{
    for (int i = 15; i >= 0; i--) {
        my_putchar("0123456789ABCDEF"[(addr >> (i * 4)) & 0xF]);
    }
    my_putchar(':');
}
