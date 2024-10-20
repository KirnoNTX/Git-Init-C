/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strcpy.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strcpy(char *dest, char const *src)
{
    char *start = dest;

    if (!dest || !src)
        return NULL;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}
