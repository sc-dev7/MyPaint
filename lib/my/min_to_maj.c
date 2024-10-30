/*
** EPITECH PROJECT, 2022
** min_to_maj.c
** File description:
** min_to_maj.c
*/

#include "../../include/my.h"


char *min_to_maj(char *str)
{
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
