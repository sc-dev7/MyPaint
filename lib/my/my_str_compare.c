/*
** EPITECH PROJECT, 2022
** my_str_compare.c
** File description:
** my str compare
*/

#include "../../include/my.h"

int    my_str_compare(char *s1, char *s2)
{
    int j;
    if (my_strlen(s1) != my_strlen(s2)) {
        return (1);
    }
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i = i + 1) {
        if (s1[i] == s2[i]) {
            j = 0;
        } else {
            return (1);
        }
    }
    return (j);
}

int my_str_n_compare(char *s1, char *s2, int len)
{
    int j;
    for (int i = 0; i < len; i = i + 1) {
        if (s1[i] == s2[i]) {
            j = 0;
        } else {
            return (1);
        }
    }
    return (j);
}
