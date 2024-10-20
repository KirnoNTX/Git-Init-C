/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strcmp.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_strcmp(char const *s1, char const *s2)
{
    if (!s1|| !s2)
        return FAILURE;
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
