/*
** EPITECH PROJECT, 2022
** draw_sprite.c
** File description:
** draw_sprite
*/

#include "../include/my.h"

void draw_sprite(glo g, ListNode* list_head)
{
    if (g.w.s == TRUE) {
        sfRenderWindow_drawSprite(g.w.window, g.w.sprite, NULL);
    }
    if (g.f.open == FALSE) {
        draw_list(list_head, g.w.window);
    }
    draw_sprite1(g);
    draw_sprite_col(g);
    draw_sprite_fil(g);
    draw_sprite_pen(g);
    draw_sprite2(g);
}

void draw_sprite1(glo g)
{
    if (g.w.file == TRUE || g.w.edition == TRUE || g.w.color == TRUE) {
        sfRenderWindow_drawRectangleShape(g.w.window, g.w.area_tool_bar, NULL);
        sfRenderWindow_drawVertexArray(g.w.window, g.w.ltb, NULL);
    }
    if (g.w.ss == FALSE) {
        sfRenderWindow_drawText(g.w.window, g.w.text_file, NULL);
        sfRenderWindow_drawText(g.w.window, g.w.text_edit, NULL);
        sfRenderWindow_drawText(g.w.window, g.w.text_help, NULL);
        sfRenderWindow_drawText(g.w.window, g.w.text_colors, NULL);
    }
}

void draw_sprite2(glo g)
{
    if (g.w.file == TRUE && g.f.open == TRUE) {
        sfRenderWindow_drawRectangleShape(g.w.window, g.w.file_rect, NULL);
        sfRenderWindow_drawRectangleShape(g.w.window, g.w.file_text, NULL);
        sfRenderWindow_drawText(g.w.window, g.w.t_file, NULL);
        if (g.w.valide == TRUE) {
            sfRenderWindow_drawText(g.w.window, g.w.win_m, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.valid, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.refuse, NULL);
        }
        if (g.w.not_valide == TRUE) {
            sfRenderWindow_drawText(g.w.window, g.w.error_m, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.valid, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.refuse, NULL);
        }
    }
    draw_sprite3(g);
}

void draw_sprite3(glo g)
{
    if (g.w.file == TRUE && g.f.save == TRUE) {
        sfRenderWindow_drawRectangleShape(g.w.window, g.w.file_rect, NULL);
        sfRenderWindow_drawRectangleShape(g.w.window, g.w.file_text, NULL);
        sfRenderWindow_drawText(g.w.window, g.w.save_name, NULL);
        if (g.w.choose == TRUE) {
            sfRenderWindow_drawText(g.w.window, g.w.no, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.png, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.jpg, NULL);
            sfRenderWindow_drawText(g.w.window, g.w.bmp, NULL);
        }
    }
}
