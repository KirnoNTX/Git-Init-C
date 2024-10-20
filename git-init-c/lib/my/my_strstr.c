/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strstr.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strstr(char *str, char const *to_find)
{
    int j = 0;

    if (!str || !to_find)
        return NULL;
    if (*to_find == '\0')
        return str;
    for (int i = 0; str[i] != '\0'; i++) {
        while (str[i + j] == to_find[j] && to_find[j] != '\0') {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i];
    }
    return NULL;
}
