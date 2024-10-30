/*
** EPITECH PROJECT, 2022
** write_text.c
** File description:
** write_text.c
*/

#include "../include/my.h"

glo write_text(glo g)
{
    g = write_text_r(g);
    g = write_text_g(g);
    g = write_text_b(g);
    g = write_text_size(g);
    g = write_text_opac(g);
    g = write_text_file(g);
    g = write_text_sfile(g);
    return (g);
}
