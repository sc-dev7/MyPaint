/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/my.h"

glo window_close(glo g, ListNode* list_head)
{
    if (g.w.ss == TRUE) {
        g = window_close2(g, list_head);
    } if (g.f.clear == TRUE) {
        freeList(list_head);
        sfRenderWindow_close(g.w.window);
        g.f.clear = FALSE;
        my_paint(g, TRUE);
    } if (g.w.o == TRUE) {
        freeList(list_head);
        sfRenderWindow_close(g.w.window);
        my_paint(g, FALSE);
    }
    return (g);
}

glo window_close2(glo g, ListNode* list_head)
{
    g.w.sav = sfTexture_copyToImage(g.w.t_sav);
    g.w.ss = FALSE;
    sfSprite_setPosition(g.w.sprite, (sfVector2f) {0, 0});
    sfRenderWindow_clear(g.w.window, sfWhite);
    sfRenderWindow_drawSprite(g.w.window, g.w.sprite, NULL);
    draw_list(list_head, g.w.window);
    if (g.w.filename[0] == '\0') {
        g.w.filename[0] = 't'; g.w.filename[1] = '\0';
    }
    if (g.w.f_bmp == TRUE) {
        g.w.filename = my_strcat(g.w.filename, ".bmp");
    } if (g.w.f_png == TRUE) {
        g.w.filename = my_strcat(g.w.filename, ".png");
    } if (g.w.f_jpg == TRUE) {
        g.w.filename = my_strcat(g.w.filename, ".jpg");
    }
    g.w.sav = sfRenderWindow_capture(g.w.window);
    sfImage_saveToFile(g.w.sav, my_strcat("./save/", g.w.filename));
    freeList(list_head); sfRenderWindow_close(g.w.window);
    return (g);
}
