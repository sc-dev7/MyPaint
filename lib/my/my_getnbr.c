/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** my getnbr
*/

#include "../../include/my.h"

int     my_getnbr(char const *str)
{
    int nb;
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
        result = result * (10) + str[i] - 48;
        } else {
            return (0);
        }
    }
    if (result <= 0) {
        return (0);
    } else {
        return (result);
    }
}
