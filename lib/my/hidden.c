/*
** EPITECH PROJECT, 2022
** hidden.c
** File description:
** hidden.c
*/

#include "../../include/my.h"

int hidden1(char *str_s, char *str_h)
{
    int id_s = 0;
    int max_s = my_strlen(str_s);
    int nb_f = 0;
    for (int i = 0; str_h[i] != '\0'; i = i + 1) {
        if (str_s[id_s] == str_h[i]) {
            nb_f = nb_f + 1;
            id_s = id_s + hidden2(id_s, max_s, i);
        }
        if (nb_f == max_s) {
            return (verif_find(nb_f, max_s));
        }
    }
    my_putchar(48);
    my_putchar('\n');
    return (84);
}

int hidden2(int id_s, int max_s, int i)
{
    if (id_s + 1 != max_s) {
        return (1);
    } else {
        return (0);
    }
    return (84);
}

int verif_find(int nb_f, int max_s)
{
    if (nb_f == max_s) {
        return (0);
    } else {
        return (1);
    }
    return (84);
}

int hidden(char *str_s, char *str_h)
{
    if (str_s[0] == '\0' || str_h[0] == '\0') {
        return (84);
    } else if (my_strlen(str_s) > my_strlen(str_h)) {
        return (84);
    } else {
        return (hidden(str_s, str_h));
    }
    return (84);
}
