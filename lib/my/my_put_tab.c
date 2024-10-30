/*
** EPITECH PROJECT, 2022
** my_put_tab.c
** File description:
** my_put_tab.c
*/

#include "../../include/my.h"

int my_put_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i = i + 1) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}

int my_put_tab_mod(char **tab)
{
    for (int i = 0; tab[i] != NULL; i = i + 1) {
        my_putstr(tab[i]);
        if (tab[i + 1] != NULL) {
            my_putchar('\n');
        }
    }
    return (0);
}
