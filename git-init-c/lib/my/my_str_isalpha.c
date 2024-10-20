/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_str_isalpha.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_str_isalpha(char const *str)
{
    if (!str)
        return FAILURE;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
            return FAILURE;
    }
    return SUCCESS;
}
