/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_put_nbr.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar(45);
        my_put_nbr(214748364);
        my_putchar(56);
        return SUCCESS;
    }
    if (nb < 0) {
        my_putchar(45);
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + 48);
    return SUCCESS;
}