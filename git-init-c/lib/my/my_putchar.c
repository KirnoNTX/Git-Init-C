/*
** EPITECH PROJECT, 2024
** kirno
** File description:
** my_putchar.c
*/

#include "my_include.h"
#include "my_macro.h"
#include "my_proto.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
