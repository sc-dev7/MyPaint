/*
** EPITECH PROJECT, 2022
** write_error.c
** File description:
** write error
*/

#include "../../include/my.h"

void write_error(char *str)
{
    write(2, str, my_strlen(str));
}
