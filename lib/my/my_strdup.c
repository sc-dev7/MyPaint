/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

#include "../../include/my.h"

char *my_strdup(char *dest, char const *src)
{
    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    return (my_strcpy(dest, src));
}
