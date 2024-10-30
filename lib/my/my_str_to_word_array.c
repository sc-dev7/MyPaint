/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** my str to word array
*/

#include "../../include/my.h"

char **my_str_to_word_array(char const *str)
{
    int line = 0;
    int character = 0;
    int i = 0;
    char **array = malloc(sizeof(char *) * nb_line(str) + 1);
    while (line != nb_line(str)) {
        array[line] = malloc(sizeof(char) * my_strlen_bn(str) + 1);
        while ((str[i] != '\0') && (str[i] != '\n')) {
            array[line][character] = str[i];
            i = i + 1;
            character = character + 1;
        }
        array[line][character] = '\0';
        line = line + 1;
        i = i + 1;
        character = 0;
    }
    array[line] = NULL;
    return (array);
}

int nb_line(char const *str)
{
    int nb = 0;
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (str[i] == '\n') {
            nb = nb + 1;
        }
    }
    return (nb + 1);
}

int    my_strlen_bn(char const *str)
{
    int    i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        i = i + 1;
    }
    return (i);
}

int count_nb_argc(char **tab)
{
    int nb_argc = 0;
    for (int i = 0; tab[i] != NULL; i = i + 1) {
        nb_argc = nb_argc + 1;
    }
    return (nb_argc);
}
