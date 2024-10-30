/*
** EPITECH PROJECT, 2022
** set_sprite_sty.c
** File description:
** set_sprite_sty.c
*/

#include "../include/my.h"

void set_sprite_sty(glo g)
{
    set_sprite_sty1(g);
    set_sprite_sty2(g);
    set_sprite_sty3(g);
    set_sprite_sty4(g);
}

void set_sprite_sty1(glo g)
{
    sfVector2f scale_rec = {60, 60};
    sfRectangleShape_setOutlineThickness(g.s.form_s, 3);
    sRSsO(g.s.form_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.s.form_s, scale_rec);
    sfRectangleShape_setFillColor(g.s.form_s, sfTransparent);
    sfRectangleShape_setOutlineThickness(g.s.size_s, 3);
    sRSsO(g.s.size_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.s.size_s, scale_rec);
    sfRectangleShape_setFillColor(g.s.size_s, sfTransparent);
    sfRectangleShape_setOutlineThickness(g.s.opacity_s, 3);
    sRSsO(g.s.opacity_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.s.opacity_s, scale_rec);
    sfRectangleShape_setFillColor(g.s.opacity_s, sfTransparent);
    sfRectangleShape_setOutlineThickness(g.s.highlighter_s, 3);
    sRSsO(g.s.highlighter_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.s.highlighter_s, scale_rec);
    sfRectangleShape_setFillColor(g.s.highlighter_s, sfTransparent);
}

void set_sprite_sty2(glo g)
{
    sfVector2f scale_rec = {60, 60};
    sfCircleShape_setRadius(g.s.f_c, 20);
    sfCircleShape_setFillColor(g.s.f_c, sfBlack);
    sfRectangleShape_setSize(g.s.f_r, (sfVector2f) {40, 40});
    sfRectangleShape_setFillColor(g.s.f_r, sfBlack);
    sfCircleShape_setRadius(g.s.f_cc, 20);
    sfCircleShape_setFillColor(g.s.f_cc, sfBlack);
    sfRectangleShape_setSize(g.s.f_rc, (sfVector2f) {40, 40});
    sfRectangleShape_setFillColor(g.s.f_rc, sfBlack);
    sfRectangleShape_setOutlineThickness(g.s.pen_s, 3);
    sRSsO(g.s.pen_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.s.pen_s, scale_rec);
    sfRectangleShape_setFillColor(g.s.pen_s, sfTransparent);
    sfRectangleShape_setOutlineThickness(g.s.eraser_s, 3);
    sRSsO(g.s.eraser_s, sRGB(0, 0, 0));
    sfRectangleShape_setSize(g.s.eraser_s, scale_rec);
    sfRectangleShape_setFillColor(g.s.eraser_s, sfTransparent);
}

void set_sprite_sty3(glo g)
{
    sfRectangleShape_setPosition(g.s.pen_s, (sfVector2f) {520, 90});
    sfRectangleShape_setPosition(g.s.highlighter_s, (sfVector2f) {620, 90});
    sfRectangleShape_setPosition(g.s.eraser_s, (sfVector2f) {720, 90});
    sfRectangleShape_setPosition(g.s.size_s, (sfVector2f) {820, 90});
    sfRectangleShape_setPosition(g.s.opacity_s, (sfVector2f) {1020, 90});
    sfRectangleShape_setPosition(g.s.form_s, (sfVector2f) {920, 90});
    sfCircleShape_setPosition(g.s.f_c, (sfVector2f) {920 + 10, 90 + 10});
    sfRectangleShape_setPosition(g.s.f_r, (sfVector2f) {920 + 10, 90 + 10});
    sfCircleShape_setPosition(g.s.f_cc, (sfVector2f) {900 + 10, 160 + 10});
    sfRectangleShape_setPosition(g.s.f_rc, (sfVector2f) {950 + 10, 160 + 10});
}

void set_sprite_sty4(glo g)
{
    sfText_setString(g.s.text_opac, "255");
    sfText_setString(g.s.text_size, "10");
    sfFont *font = sfFont_createFromFile("./resources/falling_sky.ttf");
    sfText_setFont(g.s.text_opac, font);
    sfText_setFont(g.s.text_size, font);
    sfText_setCharacterSize(g.s.text_opac, 30);
    sfText_setCharacterSize(g.s.text_size, 30);
    sfText_setColor(g.s.text_opac, sfBlack);
    sfText_setColor(g.s.text_size, sfBlack);
    sfText_setPosition(g.s.text_opac, (sfVector2f) {1026, 100});
    sfText_setPosition(g.s.text_size, (sfVector2f) {826, 100});
}
