/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** task02
*/

#include "../../include/my.h"

char	*my_strcat(char *dest, char const *src)
{
    int i = 0;
    int compt = 0;
    char *str;
    str = malloc(sizeof(*str) * (my_strlen(dest) + my_strlen(src) + 1));
    while (dest[i]) {
        str[i] = dest[i];
        i = i + 1;
    }
    while (src[compt]) {
        str[i + compt] = src[compt];
        compt = compt + 1;
    }
    str[i + compt] = '\0';
    return (str);
}

int my_strcat_p(char **dest, char const *src)
{
    int i = 0; int c = 0;
    char *tmp = malloc(sizeof(char) * (my_strlen(*dest) + 1));
    tmp = my_strcpy(tmp, *dest);
    (*dest) = malloc(sizeof(char) * (my_strlen(tmp) + my_strlen(src) + 1));
    while (tmp[i] != '\0') {
        (*dest)[i] = tmp[i];
        i = i + 1;
    }
    while (src[c] != '\0') {
        (*dest)[i + c] = src[c];
        c = c + 1;
    }
    (*dest)[i + c] = '\0';
    return (0);
}
