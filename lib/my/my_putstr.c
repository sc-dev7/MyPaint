/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** task02
*/

#include "../../include/my.h"

int    my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
