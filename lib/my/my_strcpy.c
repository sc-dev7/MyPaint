/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** task01
*/

#include "../../include/my.h"

char    *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (; src[i] != '\0'; i = i + 1) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}

int my_cpy(char **dest, char const *src, int dep, int arr)
{
    int i; int index = 0;
    (*dest) = malloc(sizeof(char) * (arr - dep + 2));
    for (i = dep; i <= arr; i = i + 1) {
        (*dest)[index] = src[i];
        index = index + 1;
    }
    (*dest)[index] = '\0';
    return (0);
}

char *my_cpy_sp(char *dest, char const *src, int dep, int arr)
{
    int i; int index = 0;
    dest = malloc(sizeof(char) * (arr - dep + 2));
    for (i = dep; i <= arr; i = i + 1) {
        dest[index] = src[i];
        index = index + 1;
    }
    dest[index] = '\0';
    return (dest);
}
