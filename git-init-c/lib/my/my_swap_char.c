/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_swap_char.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

void my_swap_char(char *a, char *b)
{
    char temp = *a;

    *a = *b;
    *b = temp;
}