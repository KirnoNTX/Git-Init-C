/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_return.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_return(int a)
{
    if (a >= 1 && a < 84)
        return SUCCESS;
    else if (a == -1 || a == 0 || a == 84)
        return FAILURE;
    return FAILURE;
}