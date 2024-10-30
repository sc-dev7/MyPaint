/*
** EPITECH PROJECT, 2022
** init_struct.c
** File description:
** init_struct.c
*/

#include "../include/my.h"

glo init_struct(glo g, int t)
{
    g.w.window; g.w.event;
    g.w.eraser_s = sfSprite_create(); g.w.pen_s = sfSprite_create();
    g.w.highlighter_s = sfSprite_create();
    g.w.texture_eraser = sfTexture_createFromFile(
    "./resources/eraser.png", NULL);
    g.w.texture_highlighter = sfTexture_createFromFile(
    "./resources/highlighter.png", NULL);
    g.w.texture_pen = sfTexture_createFromFile(
    "./resources/pen.png", NULL);
    g.w.area_image = sfRectangleShape_create();
    g.w.area_tool_bar = sfRectangleShape_create();
    g.w.ltb = sfVertexArray_create();
    g.w.drawing = FALSE; g.w.background_image = NULL;
    g.w.background_color = sfWhite; g.w.text_file = sfText_create();
    g.w.text_edit = sfText_create(); g.w.text_help = sfText_create();
    g.w.text_colors = sfText_create();
    g.w.file = FALSE; g.w.edition = FALSE;
    g.w.color = FALSE; g.w.help = FALSE;
    g.w.open = TRUE; g.w.sprite = sfSprite_create();
    g = init_struct1(g, t); return (g);
}

glo init_struct1(glo g, int t)
{
    if (t == TRUE) {
        g.w.filename = malloc(sizeof(char) * 100);
        g.w.filename[0] = '\0';
        g.w.s = FALSE;
    } else {
        g.w.texture = sfTexture_createFromFile(g.w.filename, NULL);
        sfSprite_setTexture(g.w.sprite, g.w.texture, sfTrue);
        sfSprite_setScale(g.w.sprite, (sfVector2f) {1, 1});
        sfSprite_setPosition(g.w.sprite, (sfVector2f) {0, 243});
    }
    g.w.t_file = sfText_create(); g.w.error_m = sfText_create();
    g.w.valid = sfText_create(); g.w.refuse = sfText_create();
    g.w.win_m = sfText_create();
    g.w.file_rect = sfRectangleShape_create();
    g.w.file_text = sfRectangleShape_create();
    g.w.valide = FALSE; g.w.not_valide = FALSE;
    g.w.try = FALSE; g.w.write = FALSE;
    g.w.try_again = TRUE; g.w.o = FALSE;
    g = init_struct2(g, t);
    return (g);
}

glo init_struct2(glo g, int t)
{
    g.w.f_png = FALSE; g.w.f_jpg = FALSE; g.w.f_bmp = FALSE;
    g.w.png = sfText_create(); g.w.jpg = sfText_create();
    g.w.bmp = sfText_create(); g.w.no = sfText_create();
    g.w.save_name = sfText_create(); g.w.choose = FALSE;
    g.w.f_no = FALSE; g.w.ss = FALSE;
    g.w.t_sav = sfTexture_create(1920, 840);
    g.w.sav = sfImage_create(1920, 840);
    g = init_struct_clo(g); g = init_struct_col(g);
    g = init_struct_sty(g); g = init_struct_rgb(g);
    g = init_struct_fil(g);
    return (g);
}
