/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_find_prime_sup.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return 2;
    while (my_is_prime(nb) == 0) {
        nb++;
    }
    return nb;
}
