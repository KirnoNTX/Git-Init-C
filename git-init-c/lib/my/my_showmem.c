/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_showmem.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_showmem(char const *str, int size)
{
    if (!str)
        return FAILURE;
    for (int i = 0; i < size; i += 16) {
        my_print_mem_address((unsigned long long)(str + i));
        my_print_hex_chars(str, size, i);
        my_putchar(' ');
        my_showstr(&str[i]);
        my_putchar('\n');
    }
    return SUCCESS;
}
