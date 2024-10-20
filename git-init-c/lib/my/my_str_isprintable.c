/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_str_isprintable.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_str_isprintable(char const *str)
{
    if (!str)
        return FAILURE;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126)
            return FAILURE;
    }
    return SUCCESS;
}