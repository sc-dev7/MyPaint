/*
** EPITECH PROJECT, 2022
** clock.c.c
** File description:
** clock.c
*/

#include "../include/my.h"

glo event_click_file(glo g, ListNode* list_head)
{
    if (g.w.file == TRUE) {
        g = event_click_file1(g, list_head);
        g = event_click_file2(g, list_head);
        g = event_click_file3(g, list_head);
        g = event_click_file4(g, list_head);
        g = event_click_file5(g, list_head);
        g = event_click_file6(g, list_head);
        g = event_click_file7(g, list_head);
        g = event_click_file8(g, list_head);
    }
    return (g);
}

glo event_click_file1(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 200 && g.w.event.mouseButton.x <= 280)
    && (g.w.event.mouseButton.y >= 80 && g.w.event.mouseButton.y <= 160)) {
        if (g.s.pen == TRUE) {
            g.s.pen = FALSE;
        }
        if (g.s.highlighter == TRUE) {
            g.s.highlighter = FALSE;
        }
        if (g.s.eraser == TRUE) {
            g.s.eraser = FALSE;
        }
        if (g.f.open == FALSE) {
            g.f.open = TRUE; g.w.s = FALSE;
        }
    }
    return (g);
}

glo event_click_file2(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 60 && g.w.event.mouseButton.x <= 120)
    && (g.w.event.mouseButton.y >= 80 && g.w.event.mouseButton.y <= 160)) {
        if (g.s.pen == TRUE) {
            g.s.pen = FALSE;
        }
        if (g.s.highlighter == TRUE) {
            g.s.highlighter = FALSE;
        }
        if (g.s.eraser == TRUE) {
            g.s.eraser = FALSE;
        }
        if (g.f.save == FALSE) {
            g.f.save = TRUE;
        }
    }
    return (g);
}

glo event_click_file3(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 560 && g.w.event.mouseButton.x <= 1360)
    && (g.w.event.mouseButton.y >= 515 && g.w.event.mouseButton.y <= 565)
    && (g.f.save == TRUE)) {
        if (g.w.write == FALSE) {
            g.w.filename[0] = '\0';
            g.w.write = TRUE; g.w.choose = FALSE;
        } else {
            g.w.write = FALSE; g.w.choose = TRUE;
        }
    }
    if ((g.w.event.mouseButton.x >= 740 && g.w.event.mouseButton.x <= 810)
    && (g.w.event.mouseButton.y >= 600 && g.w.event.mouseButton.y <= 630)
    && (g.f.save == TRUE && g.w.choose == TRUE)) {
        if (g.w.f_png == FALSE) {
            g.w.f_png = TRUE; g.w.ss = TRUE;
            g.w.open = FALSE; g.w.choose = FALSE;
            g.f.save = FALSE; g.w.file = FALSE;
        }
    }
    return (g);
}

glo event_click_file4(glo g, ListNode* list_head)
{
    if ((g.w.event.mouseButton.x >= 840 && g.w.event.mouseButton.x <= 910)
    && (g.w.event.mouseButton.y >= 600 && g.w.event.mouseButton.y <= 630)
    && (g.f.save == TRUE && g.w.choose == TRUE)) {
        if (g.w.f_jpg == FALSE) {
            g.w.f_jpg = TRUE; g.w.ss = TRUE;
            g.w.open = FALSE; g.w.choose = FALSE;
            g.f.save = FALSE; g.w.file = FALSE;
        }
    }
    if ((g.w.event.mouseButton.x >= 940 && g.w.event.mouseButton.x <= 1020)
    && (g.w.event.mouseButton.y >= 600 && g.w.event.mouseButton.y <= 630)
    && (g.f.save == TRUE && g.w.choose == TRUE)) {
        if (g.w.f_bmp == FALSE) {
            g.w.f_bmp = TRUE; g.w.ss = TRUE;
            g.w.open = FALSE; g.w.choose = FALSE;
            g.f.save = FALSE; g.w.file = FALSE;
        }
    }
    return (g);
}
