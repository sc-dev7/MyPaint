/*
** EPITECH PROJECT, 2022
** clock.c.c
** File description:
** clock.c
*/

#include "../include/my.h"

glo event_click_file5(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 1040 && g.w.event.mouseButton.x <= 1100)
    && (g.w.event.mouseButton.y >= 600 && g.w.event.mouseButton.y <= 630)
    && (g.f.save == TRUE && g.w.choose == TRUE)) {
        if (g.w.f_no == FALSE) {
            g.w.f_no = TRUE; g.w.choose = FALSE;
            g.f.save = FALSE; g.w.file = FALSE;
            g.w.filename[0] = '\0';
            sfText_setString(g.w.save_name, "Write\0");
        }
    }
    if ((g.w.event.mouseButton.x >= 970 && g.w.event.mouseButton.x <= 1000)
    && (g.w.event.mouseButton.y >= 650 && g.w.event.mouseButton.y <= 680)
    && (g.f.open == TRUE && g.w.try_again == FALSE && g.w.valide == TRUE)) {
        g.f.open = FALSE;
        sfText_setString(g.w.t_file, "Write\0");
        g.w.valide = FALSE;
        g.w.try_again = TRUE;
    }
    return (g);
}

glo event_click_file6(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 560 && g.w.event.mouseButton.x <= 1360)
    && (g.w.event.mouseButton.y >= 515 && g.w.event.mouseButton.y <= 565)
    && (g.f.open == TRUE && g.w.try_again == TRUE)) {
        if (g.w.write == FALSE) {
            g.w.filename[0] = '\0'; g.w.write = TRUE;
            g.w.try_again = TRUE;
        } else {
            g.w.write = FALSE; g.w.try = TRUE;
            g.w.try_again = FALSE;
        }
    }
    if ((g.w.event.mouseButton.x >= 870 && g.w.event.mouseButton.x <= 900)
    && (g.w.event.mouseButton.y >= 650 && g.w.event.mouseButton.y <= 680)
    && (g.f.open == TRUE && g.w.try_again == FALSE && g.w.not_valide == TRUE)) {
        g.w.try_again = TRUE; g.w.not_valide = FALSE;
        sfText_setString(g.w.t_file, "Write\0");
    }
    return (g);
}

glo event_click_file7(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 970 && g.w.event.mouseButton.x <= 1000)
    && (g.w.event.mouseButton.y >= 650 && g.w.event.mouseButton.y <= 680)
    && (g.f.open == TRUE && g.w.try_again == FALSE && g.w.not_valide == TRUE)) {
        g.f.open = FALSE; sfText_setString(g.w.t_file, "Write\0");
        g.w.not_valide = FALSE; g.w.try_again = TRUE;
    }
    if ((g.w.event.mouseButton.x >= 870 && g.w.event.mouseButton.x <= 900)
    && (g.w.event.mouseButton.y >= 650 && g.w.event.mouseButton.y <= 680)
    && (g.f.open == TRUE && g.w.try_again == FALSE && g.w.valide == TRUE)) {
        g.f.open = FALSE; g.w.valide = FALSE; g.w.try_again = TRUE;
        g.w.texture = sfTexture_createFromFile(g.w.filename, NULL);
        sfSprite_setTexture(g.w.sprite, g.w.texture, sfTrue);
        sfSprite_setScale(g.w.sprite, (sfVector2f) {1, 1});
        sfSprite_setPosition(g.w.sprite, (sfVector2f) {0, 243});
        sfText_setString(g.w.t_file, "Write\0");
        g.w.s = TRUE; g.w.open = FALSE; g.w.o = TRUE;
    }
    return (g);
}

glo event_click_file8(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 340 && g.w.event.mouseButton.x <= 420)
    && (g.w.event.mouseButton.y >= 80 && g.w.event.mouseButton.y <= 160)) {
        if (g.f.clear == TRUE) {
            g.f.clear = FALSE;
        } else {
            g.f.clear = TRUE; g.w.open = FALSE;
        }
    }
    return (g);
}
