/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_putstr.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_putstr(char const *str)
{
    if (!str)
        return FAILURE;
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return SUCCESS;
}