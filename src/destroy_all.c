/*
** EPITECH PROJECT, 2022
** destroy_all_sprite.c
** File description:
** destroy_all_sprite
*/

#include "../include/my.h"

void destroy_all(glo g)
{
    destroy_all1(g);
    destroy_all2(g);
    destroy_all3(g);
    destroy_all4(g);
}

void destroy_all1(glo g)
{
    sfSprite_destroy(g.f.s);
    sfText_destroy(g.f.texture_c);
    sfSprite_destroy(g.f.c);
    sfText_destroy(g.f.texture_s);
    sfSprite_destroy(g.f.o);
    sfText_destroy(g.f.texture_o);
    sfSprite_destroy(g.w.bg);
    sfText_destroy(g.w.texture_area_image);
    sfText_destroy(g.w.texture_bg);
    sfText_destroy(g.w.texture_eraser);
    sfText_destroy(g.w.texture_highlighter);
    sfText_destroy(g.w.texture_pen);
    sfSprite_destroy(g.w.area_image);
    sfSprite_destroy(g.w.pen_s);
    sfSprite_destroy(g.w.highlighter_s);
    sfSprite_destroy(g.w.eraser_s);
    sfText_destroy(g.w.text_edit);
    sfText_destroy(g.w.text_file);
    sfText_destroy(g.w.text_help);
    sfText_destroy(g.w.text_colors);
}

void destroy_all2(glo g)
{
    sfText_destroy(g.s.text_size);
    sfText_destroy(g.s.text_opac);
    sfText_destroy(g.r.text_r);
    sfText_destroy(g.r.text_g);
    sfText_destroy(g.r.text_b);
    sfVertexArray_destroy(g.w.ltb);
    sfImage_destroy(g.w.background_image);
    sfRenderWindow_destroy(g.w.window);
    sfClock_destroy(g.t.clock);
    sfClock_destroy(g.t.clock2);
    sfClock_destroy(g.t.clock3);
    sfClock_destroy(g.t.clock4);
    sfRectangleShape_destroy(g.f.clear_s);
    sfRectangleShape_destroy(g.f.open_s);
    sfRectangleShape_destroy(g.f.save_s);
    sfRectangleShape_destroy(g.r.rgb_r_s);
    sfRectangleShape_destroy(g.r.rgb_g_s);
    sfRectangleShape_destroy(g.r.rgb_b_s);
    sfRectangleShape_destroy(g.r.rgb_s);
    sfCircleShape_destroy(g.s.circle);
}

void destroy_all3(glo g)
{
    sfCircleShape_destroy(g.s.circle);
    sfRectangleShape_destroy(g.s.rect);
    sfRectangleShape_destroy(g.s.pen_s);
    sfRectangleShape_destroy(g.s.highlighter_s);
    sfRectangleShape_destroy(g.s.eraser_s);
    sfRectangleShape_destroy(g.s.form_s);
    sfRectangleShape_destroy(g.s.size_s);
    sfRectangleShape_destroy(g.s.opacity_s);
    sfCircleShape_destroy(g.s.f_c);
    sfRectangleShape_destroy(g.s.f_r);
    sfRectangleShape_destroy(g.s.f_rc);
    sfCircleShape_destroy(g.s.f_cc);
    sfRectangleShape_destroy(g.c.red_s);
    sfRectangleShape_destroy(g.c.green_s);
    sfRectangleShape_destroy(g.c.blue_s);
    sfRectangleShape_destroy(g.c.black_s);
    sfRectangleShape_destroy(g.c.white_s);
    sfRectangleShape_destroy(g.c.yellow_s);
    sfRectangleShape_destroy(g.c.cyan_s);
    sfRectangleShape_destroy(g.c.magenta_s);
}

void destroy_all4(glo g)
{
    sfRectangleShape_destroy(g.w.area_tool_bar);
    sfRectangleShape_destroy(g.w.limit_area_image);
}
