/*
** EPITECH PROJECT, 2022
** set_sprite_rgb.c
** File description:
** set_sprite_rgb.c
*/

#include "../include/my.h"

void set_sprite_rgb(glo g)
{
    set_sprite_rgb1(g);
    set_sprite_rgb2(g);
}

void set_sprite_rgb1(glo g)
{
    sfVector2f scale_rec = {40, 40};
    sfRectangleShape_setOutlineThickness(g.r.rgb_s, 3);
    sRSsO(g.r.rgb_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.r.rgb_s, scale_rec);
    sfRectangleShape_setFillColor(g.r.rgb_s, sRGB(0, 0, 0));
    sfRectangleShape_setPosition(g.r.rgb_s, (sfVector2f) {1160, 130});
    sfRectangleShape_setOutlineThickness(g.r.rgb_r_s, 3);
    sRSsO(g.r.rgb_r_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.r.rgb_r_s, scale_rec);
    sfRectangleShape_setFillColor(g.r.rgb_r_s, sfTransparent);
    sfRectangleShape_setPosition(g.r.rgb_r_s, (sfVector2f) {1240, 130});
    sfRectangleShape_setOutlineThickness(g.r.rgb_g_s, 3);
    sRSsO(g.r.rgb_g_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.r.rgb_g_s, scale_rec);
    sfRectangleShape_setFillColor(g.r.rgb_g_s, sfTransparent);
    sfRectangleShape_setPosition(g.r.rgb_g_s, (sfVector2f) {1320, 130});
    sfRectangleShape_setOutlineThickness(g.r.rgb_b_s, 3);
    sRSsO(g.r.rgb_b_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.r.rgb_b_s, scale_rec);
    sfRectangleShape_setFillColor(g.r.rgb_b_s, sfTransparent);
}

void set_sprite_rgb2(glo g)
{
    sfRectangleShape_setPosition(g.r.rgb_b_s, (sfVector2f) {1400, 130});
    sfText_setString(g.r.text_r, "0");
    sfText_setString(g.r.text_g, "0");
    sfText_setString(g.r.text_b, "0");
    sfFont *font = sfFont_createFromFile("./resources/falling_sky.ttf");
    sfText_setFont(g.r.text_r, font);
    sfText_setFont(g.r.text_g, font);
    sfText_setFont(g.r.text_b, font);
    sfText_setCharacterSize(g.r.text_r, 20);
    sfText_setCharacterSize(g.r.text_g, 20);
    sfText_setCharacterSize(g.r.text_b, 20);
    sfText_setColor(g.r.text_r, sfBlack);
    sfText_setColor(g.r.text_g, sfBlack);
    sfText_setColor(g.r.text_b, sfBlack);
    sfText_setPosition(g.r.text_r, (sfVector2f) {1244, 136});
    sfText_setPosition(g.r.text_g, (sfVector2f) {1324, 136});
    sfText_setPosition(g.r.text_b, (sfVector2f) {1404, 136});
}
