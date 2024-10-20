/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_compute_square_root.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int my_compute_square_root(int nb)
{
    if (nb < 0)
        return FAILURE;
    for (int i = 0; i * i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
