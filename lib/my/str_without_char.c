/*
** EPITECH PROJECT, 2022
** str_without_char.c
** File description:
** str_without_char.c
*/

#include "../../include/my.h"

int str_without_char(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (str[i] == c) {
            return (84);
        }
    }
    return (0);
}

int letter_or_not(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return (GOOD_RETURN);
    }
    return (BAD_RETURN);
}
