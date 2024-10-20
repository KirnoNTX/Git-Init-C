/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_showstr.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_showstr(char const *str)
{
    if (!str)
        return FAILURE;
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_str_isprintable(&str[i]) == SUCCESS) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            my_putchar((str[i] / 16) + '0');
            my_putchar((str[i] % 16) + '0');
        }
    }
    return SUCCESS;
}
