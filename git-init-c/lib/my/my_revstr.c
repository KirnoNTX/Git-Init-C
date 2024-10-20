/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_revstr.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);

    if (!str)
        return NULL;
    for (int i = 0; i < len / 2; i++) {
        my_swap_char(&str[i], &str[len - i - 1]);
    }
    return str;
}