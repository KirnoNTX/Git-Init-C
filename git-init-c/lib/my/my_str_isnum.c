/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_str_isnum.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_str_isnum(char const *str)
{
    if (!str)
        return FAILURE;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return FAILURE;
    }
    return SUCCESS;
}
