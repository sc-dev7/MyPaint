/*
** EPITECH PROJECT, 2022
** my_nbrlen.c
** File description:
** task03
*/

#include "../../include/my.h"

int    my_nbrlen(int n)
{
    int i;
    for (i = 0; n >= 1; i = i + 1) {
        n = n / 10;
    }
    return (i);
}
