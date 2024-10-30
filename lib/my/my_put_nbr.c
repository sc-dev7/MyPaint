/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** task07
*/

#include "../../include/my.h"

int    my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (0);
}

int my_put_nbr_e(int *nb, int len)
{
    for (int i = 0; i < len; i = i  + 1) {
        my_put_nbr(nb[i]);
        my_putchar('\n');
    }
    return (0);
}
