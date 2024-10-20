/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strupcase.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strupcase(char *str)
{
    if (!str)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
    }
    return str;
}
