/*
** EPITECH PROJECT, 2022
** verif_int.c
** File description:
** verif_int
*/

#include "../../include/my.h"

int verif_int(char *str)
{
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-') {
            return (84);
        }
    }
    return (0);
}

int str_to_int(char *str)
{
    int tmp = 0; int j = 0;
    int neg = 1;
    if (str[0] == '-') {
        neg = -1;
        j = 1;
    }
    for (int i = j; str[i] != '\0'; i = i + 1) {
        tmp = tmp + (str[i] - 48);
        if (str[i + 1] != '\0') {
            tmp = tmp * 10;
        }
    }
    return (tmp * neg);
}

char *int_to_str(int nb)
{
    int tmp = nb;
    int size = 0;
    while (tmp != 0) {
        size = size + 1;
        tmp = tmp / 10;
    }
    if (size == 0) {
        size = 1;
    }
    char *str = malloc(sizeof(char) * (size + 1));
    int i = size - 1;
    while (nb != 0) {
        str[i] = '0' + (nb % 10);
        nb = nb / 10;
        i = i - 1;
    }
    str[size] = '\0';
    return str;
}
