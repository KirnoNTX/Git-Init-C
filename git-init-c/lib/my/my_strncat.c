/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strncat.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    if (!dest || !src || nb < 0)
        return NULL;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0' && j < nb) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}
