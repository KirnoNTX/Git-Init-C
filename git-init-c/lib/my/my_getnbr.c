/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_getnbr.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_getnbr(char const *str)
{
    int result = 0;
    int sign = 1;

    if (!str)
        return FAILURE;
    while (*str == '-' || *str == '+') {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}
