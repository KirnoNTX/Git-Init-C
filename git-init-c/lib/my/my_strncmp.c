/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strncmp.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (!s1 || !s2 || n <= 0)
        return FAILURE;
    for (int i = 0; i < n && (s1[i] != '\0' || s2[i] != '\0'); i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return SUCCESS;
}
