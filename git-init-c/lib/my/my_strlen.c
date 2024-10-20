/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strlen.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_strlen(char const *str)
{
    int length = 0;

    if (!str)
        return FAILURE;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
