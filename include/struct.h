/*
** EPITECH PROJECT, 2022
** struct_h
** File description:
** struct
*/

#include "../include/my.h"

#ifndef STRUCT_H_

    # define STRUCT_H_

    typedef struct ListNode {
        sfCircleShape *circle;
        sfRectangleShape *rect;
        int form;
        struct ListNode* next;
    } ListNode;

    typedef struct f {
        sfRectangleShape *clear_s;
        sfRectangleShape *open_s;
        sfRectangleShape *save_s;
        sfTexture *texture_s;
        sfSprite *s;
        sfTexture *texture_c;
        sfSprite *c;
        sfTexture *texture_o;
        sfSprite *o;
        int clear;
        int open;
        int save;
    } fil;

    typedef struct r {
        int tmp;
        int *rgb;
        int rgb_status;
        char *input;
        int r;
        int g;
        int b;
        sfText *text_r;
        sfText *text_g;
        sfText *text_b;
        sfRectangleShape *rgb_r_s;
        sfRectangleShape *rgb_g_s;
        sfRectangleShape *rgb_b_s;
        sfRectangleShape *rgb_s;
    } rgb;

    typedef struct t {
        sfClock *clock;
        sfTime elapsed_time;
        sfClock *clock2;
        sfTime elapsed_time2;
        sfClock *clock3;
        sfTime elapsed_time3;
        sfClock *clock4;
        sfTime elapsed_time4;
    } clo;

    typedef struct s {
        sfCircleShape *circle;
        sfRectangleShape *rect;
        sfRectangleShape *pen_s;
        sfRectangleShape *highlighter_s;
        sfRectangleShape *eraser_s;
        sfRectangleShape *form_s;
        sfRectangleShape *size_s;
        sfRectangleShape *opacity_s;
        sfText *text_size;
        sfText *text_opac;
        sfCircleShape *f_c;
        sfRectangleShape *f_r;
        sfCircleShape *f_cc;
        sfRectangleShape *f_rc;
        int pen; int eraser;
        int highlighter; int form;
        int size; int opacity;
        int value_form; int value_size;
        int value_opacity; char *input;
        int tmp;
    } sty;

    typedef struct c {
        sfRectangleShape *red_s;
        sfRectangleShape *green_s;
        sfRectangleShape *blue_s;
        sfRectangleShape *white_s;
        sfRectangleShape *black_s;
        sfRectangleShape *yellow_s;
        sfRectangleShape *cyan_s;
        sfRectangleShape *magenta_s;
        int black; int white;
        int red; int yellow;
        int magenta; int cyan;
        int green; int blue;
        int tmp;
    } col;

    typedef struct w {
        sfRenderWindow *window; sfVideoMode mode;
        sfEvent event; sfTexture *texture_bg;
        sfSprite *bg; sfTexture *texture_area_image;
        sfSprite *area_image; sfTexture *texture_pen;
        sfSprite *pen_s; sfTexture *texture_highlighter;
        sfSprite *highlighter_s; sfTexture *texture_eraser;
        sfSprite *eraser_s; sfRectangleShape *limit_area_image;
        sfRectangleShape *area_tool_bar; sfVertexArray *ltb;
        int drawing; sfImage *background_image;
        sfColor background_color; sfText *text_file;
        sfText *text_edit; sfText *text_help;
        sfText *text_colors; int file; int edition;
        int color; int help; int open;
        sfTexture *texture; sfSprite *sprite;
        char *filename; sfText *t_file; sfText *error_m;
        sfText *win_m; sfText *valid; sfText *refuse;
        int valide; int not_valide; int try; int write;
        int try_again; int s; int o;
        sfRectangleShape *file_rect; sfRectangleShape *file_text;
        sfText *png; sfText *jpg; sfText *bmp; sfText *no;
        sfText *save_name; int choose; int f_no;
        int f_png; int f_jpg; int f_bmp; int ss;
        sfTexture *t_sav; sfImage *sav;
    } win;

    typedef struct g {
        fil f;
        clo t;
        col c;
        rgb r;
        sty s;
        win w;
    } glo;

#endif
