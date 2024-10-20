/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_isneg.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return SUCCESS;
}