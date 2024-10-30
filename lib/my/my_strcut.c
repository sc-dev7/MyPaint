/*
** EPITECH PROJECT, 2022
** my_strcut.c
** File description:
** my_strcut
*/

#include "../../include/my.h"

char *my_strcut(char *str, int index)
{
    int i;
    int j = 0;
    char *tmp = malloc(sizeof(char) * (my_strlen(str) - index + 1));
    for (i = index; str[i] != '\0'; i = i + 1) {
        tmp[j] = str[i];
        j = j + 1;
    }
    tmp[j] = '\0';
    return (tmp);
}
