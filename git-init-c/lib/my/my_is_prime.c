/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_is_prime.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_is_prime(int nb)
{
    if (nb <= 1)
        return FAILURE;
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0)
            return 0;
    }
    return SUCCESS;
}
