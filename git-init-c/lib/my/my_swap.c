/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_swap.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}