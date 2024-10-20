/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strncpy.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    char *start = dest;

    if (!dest || !src)
        return NULL;
    for (int i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (int i = my_strlen(src); i < n; i++) {
        dest[i] = '\0';
    }
    return start;
}
