/*
** EPITECH PROJECT, 2022
** set_sprite.c
** File description:
** set_sprite.c
*/

#include "../include/my.h"

void set_sprite_win1(glo g)
{
    sfVector2f scale_sprite = {1, 1};
    sfVector2f scale_area_image = {1920, 840};
    sfSprite_setTexture(g.w.eraser_s, g.w.texture_eraser, sfTrue);
    sfSprite_setScale(g.w.eraser_s, scale_sprite);
    sfSprite_setPosition(g.w.eraser_s, (sfVector2f) {720, 90});
    sfSprite_setTexture(g.w.highlighter_s, g.w.texture_highlighter, sfTrue);
    sfSprite_setScale(g.w.highlighter_s, scale_sprite);
    sfSprite_setPosition(g.w.pen_s, (sfVector2f) {520, 90});
    sfSprite_setTexture(g.w.pen_s, g.w.texture_pen, sfTrue);
    sfSprite_setScale(g.w.pen_s, scale_sprite);
    sfSprite_setPosition(g.w.highlighter_s, (sfVector2f) {620, 90});
    sfRectangleShape_setSize(g.w.area_image, scale_area_image);
    sfRectangleShape_setFillColor(g.w.area_image, sfWhite);
    sfRectangleShape_setPosition(g.w.area_image, (sfVector2f) {0, 240});
    sfVector2f scale_area_tool_bar = {1920, 240};
    sfRectangleShape_setOutlineThickness(g.w.area_tool_bar, 3);
    sRSsO(g.w.area_tool_bar, sRGB(100, 100, 100));
    sfRectangleShape_setSize(g.w.area_tool_bar, scale_area_tool_bar);
    sfRectangleShape_setFillColor(g.w.area_tool_bar, sRGB(225, 225, 225));
    sfRectangleShape_setPosition(g.w.area_tool_bar, (sfVector2f) {0, 0});
}

void set_sprite_win2(glo g)
{
    sfText_setString(g.w.text_file, "file");
    sfFont *font = sfFont_createFromFile("./resources/falling_sky.ttf");
    sfText_setFont(g.w.text_file, font); sfText_setFont(g.w.text_edit, font);
    sfText_setCharacterSize(g.w.text_file, 30);
    sfText_setColor(g.w.text_file, sfBlack);
    sfText_setPosition(g.w.text_file, (sfVector2f) {220, 5});
    sfText_setString(g.w.text_edit, "edition");
    sfText_setCharacterSize(g.w.text_edit, 30);
    sfText_setColor(g.w.text_edit, sfBlack);
    sfText_setPosition(g.w.text_edit, (sfVector2f) {752, 5});
    sfText_setString(g.w.text_help, "help");
    sfText_setFont(g.w.text_help, font); sfText_setFont(g.w.text_colors, font);
    sfText_setCharacterSize(g.w.text_help, 30);
    sfText_setColor(g.w.text_help, sfBlack);
    sfText_setPosition(g.w.text_help, (sfVector2f) {1750, 5});
    sfText_setString(g.w.text_colors, "colors");
    sfText_setCharacterSize(g.w.text_colors, 30);
    sfText_setColor(g.w.text_colors, sfBlack);
    sfText_setPosition(g.w.text_colors, (sfVector2f) {1340, 5});
}

void set_sprite_win3(glo g)
{
    sfText_setString(g.w.png, ".png\0");
    sfText_setString(g.w.jpg, ".jpg\0");
    sfText_setString(g.w.bmp, ".bmp\0");
    sfText_setString(g.w.no, "No\0");
    sfText_setString(g.w.save_name, "Write\0");
    sfText_setString(g.w.t_file, "Write\0");
    sfText_setString(g.w.error_m, "This file does not exist. Try Again\0");
    sfText_setString(g.w.win_m, "This file exists. Do you want to open it.\0");
    sfText_setString(g.w.valid, "Yes\0"); sfText_setString(g.w.refuse, "No\0");
    sfFont *font = sfFont_createFromFile("./resources/falling_sky.ttf");
    sfText_setFont(g.w.t_file, font); sfText_setFont(g.w.win_m, font);
    sfText_setFont(g.w.error_m, font); sfText_setFont(g.w.valid, font);
    sfText_setFont(g.w.refuse, font);
    sfText_setFont(g.w.png, font);
    sfText_setFont(g.w.jpg, font);
    sfText_setFont(g.w.bmp, font);
    sfText_setFont(g.w.no, font);
    sfText_setFont(g.w.save_name, font);
}

void set_sprite_win4(glo g)
{
    sfText_setCharacterSize(g.w.t_file, 30);
    sfText_setCharacterSize(g.w.win_m, 30);
    sfText_setCharacterSize(g.w.error_m, 30);
    sfText_setCharacterSize(g.w.valid, 30);
    sfText_setCharacterSize(g.w.refuse, 30);
    sfText_setCharacterSize(g.w.png, 30);
    sfText_setCharacterSize(g.w.jpg, 30);
    sfText_setCharacterSize(g.w.bmp, 30);
    sfText_setCharacterSize(g.w.no, 30);
    sfText_setCharacterSize(g.w.save_name, 30);
    sfText_setColor(g.w.t_file, sfBlack); sfText_setColor(g.w.win_m, sfBlack);
    sfText_setColor(g.w.error_m, sfBlack); sfText_setColor(g.w.valid, sfBlack);
    sfText_setColor(g.w.refuse, sfBlack);
    sfText_setColor(g.w.no, sfBlack);
    sfText_setColor(g.w.png, sfBlack);
    sfText_setColor(g.w.jpg, sfBlack);
    sfText_setColor(g.w.bmp, sfBlack);
    sfText_setColor(g.w.save_name, sfBlack);
}

void set_sprite_win5(glo g)
{
    sfText_setPosition(g.w.t_file, (sfVector2f) {560, 525});
    sfText_setPosition(g.w.win_m, (sfVector2f) {720, 600});
    sfText_setPosition(g.w.error_m, (sfVector2f) {740, 600});
    sfText_setPosition(g.w.valid, (sfVector2f) {870, 650});
    sfText_setPosition(g.w.refuse, (sfVector2f) {970, 650});
    sfText_setPosition(g.w.save_name, (sfVector2f) {560, 525});
    sfText_setPosition(g.w.png, (sfVector2f) {750, 600});
    sfText_setPosition(g.w.jpg, (sfVector2f) {850, 600});
    sfText_setPosition(g.w.bmp, (sfVector2f) {950, 600});
    sfText_setPosition(g.w.no, (sfVector2f) {1050, 600});
    sfVector2f scale_rect = {1920, 1080}; sfVector2f scale_file = {800, 50};
    sfRectangleShape_setSize(g.w.file_rect, scale_rect);
    sfRectangleShape_setFillColor(g.w.file_rect, sRGBA(128, 128, 128, 200));
    sfRectangleShape_setPosition(g.w.file_rect, (sfVector2f) {0, 0});
    sfRectangleShape_setOutlineThickness(g.w.file_text, 3);
    sfRectangleShape_setOutlineColor(g.w.file_text, sfBlack);
    sfRectangleShape_setSize(g.w.file_text, scale_file);
    sfRectangleShape_setFillColor(g.w.file_text, sfTransparent);
    sfRectangleShape_setPosition(g.w.file_text, (sfVector2f) {560, 515});
}
