/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strcat.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    if (!dest|| !src)
        return NULL;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}
