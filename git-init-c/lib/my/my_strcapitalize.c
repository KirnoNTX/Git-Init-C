/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_strcapitalize.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

char *my_strcapitalize(char *str)
{
    int capitalize_next = 1;

    if (!str)
        return NULL;
    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 'a' - 'A';
        }
        capitalize_next = (str[i] < '0' || (str[i] > '9' && str[i] < 'A') ||
            (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z');
    }
    return str;
}
