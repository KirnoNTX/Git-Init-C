/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_compute_power_rec.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_compute_power_rec(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nb * my_compute_power_rec(nb, power - 1);
}