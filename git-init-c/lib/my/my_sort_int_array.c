/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_sort_int_array.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

int bubble_sort_pass(int *tab, int limit)
{
    int swapped = FAILURE;

    for (int j = 0; j < limit; j++) {
        if (tab[j] > tab[j + 1]) {
            my_swap(&tab[j], &tab[j + 1]);
            swapped = SUCCESS;
        }
    }
    return swapped;
}

void my_sort_int_array(int *tab, int size)
{
    for (int limit = size - 1; limit > 0; limit--) {
        if (bubble_sort_pass(tab, limit) == FAILURE)
            break;
    }
}