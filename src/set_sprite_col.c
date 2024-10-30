/*
** EPITECH PROJECT, 2022
** set_sprite_col.c
** File description:
** set_sprite_col.c
*/

#include "../include/my.h"

void set_sprite_col(glo g)
{
    set_sprite_col1(g);
    set_sprite_col2(g);
    set_sprite_col3(g);
}

void set_sprite_col1(glo g)
{
    sfVector2f scale_rec = {40, 40};
    sfRectangleShape_setOutlineThickness(g.c.blue_s, 3);
    sRSsO(g.c.blue_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.blue_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.blue_s, sfBlue);
    sfRectangleShape_setOutlineThickness(g.c.green_s, 3);
    sRSsO(g.c.green_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.green_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.green_s, sfGreen);
    sfRectangleShape_setOutlineThickness(g.c.red_s, 3);
    sRSsO(g.c.red_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.red_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.red_s, sfRed);
    sfRectangleShape_setOutlineThickness(g.c.white_s, 3);
    sRSsO(g.c.white_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.white_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.white_s, sfWhite);
}

void set_sprite_col2(glo g)
{
    sfVector2f scale_rec = {40, 40};
    sfRectangleShape_setOutlineThickness(g.c.black_s, 3);
    sRSsO(g.c.black_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.black_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.black_s, sfBlack);
    sfRectangleShape_setOutlineThickness(g.c.cyan_s, 3);
    sRSsO(g.c.cyan_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.cyan_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.cyan_s, sfCyan);
    sfRectangleShape_setOutlineThickness(g.c.yellow_s, 3);
    sRSsO(g.c.yellow_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.yellow_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.yellow_s, sfYellow);
    sfRectangleShape_setOutlineThickness(g.c.magenta_s, 3);
    sRSsO(g.c.magenta_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.c.magenta_s, scale_rec);
    sfRectangleShape_setFillColor(g.c.magenta_s, sfMagenta);
}

void set_sprite_col3(glo g)
{
    sfRectangleShape_setPosition(g.c.black_s, (sfVector2f) {1480, 130});
    sfRectangleShape_setPosition(g.c.white_s, (sfVector2f) {1560, 130});
    sfRectangleShape_setPosition(g.c.red_s, (sfVector2f) {1160, 50});
    sfRectangleShape_setPosition(g.c.green_s, (sfVector2f) {1240, 50});
    sfRectangleShape_setPosition(g.c.blue_s, (sfVector2f) {1320, 50});
    sfRectangleShape_setPosition(g.c.yellow_s, (sfVector2f) {1400, 50});
    sfRectangleShape_setPosition(g.c.cyan_s, (sfVector2f) {1480, 50});
    sfRectangleShape_setPosition(g.c.magenta_s, (sfVector2f) {1560, 50});
}
