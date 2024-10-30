/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/my.h"

int main (int ac, char **av)
{
    glo g; win w; sty s; col c;
    rgb r; clo t; fil f;
    if (ac != 1) {
        return (84);
    } else {
        return (my_paint(g, TRUE));
    }
    return (84);
}

int my_paint(glo g, int t)
{
    g = init_struct(g, t);
    set_sprite(g);
    sfVideoMode mode = {1920, 1080, 32};
    g.w.mode = mode;
    g.w.window = sfRenderWindow_create(g.w.mode, "My paint",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(g.w.window, 60);
    sfRenderWindow_clear(g.w.window, g.w.background_color);
    if (!g.w.window)
    return EXIT_FAILURE;
    in_working(g);
    return (0);
}

void in_working(glo g)
{
    sfVector2i last_mouse_pos = {0, 0};
    sfTime last_mouse_time = sfTime_Zero;
    set_lines_tool_bar(g); ListNode* list_head = NULL;
    g.w.background_image = sfRenderWindow_capture(g.w.window);
    while (sfRenderWindow_isOpen(g.w.window) && g.w.open == TRUE) {
        while (sfRenderWindow_pollEvent(g.w.window, &g.w.event)) {
            g = event(g, list_head);
        }
        list_head = event_ae(g, list_head);
        g = clock(g);
        sfRenderWindow_clear(g.w.window, sfWhite);
        sfRenderWindow_drawRectangleShape(g.w.window, g.w.area_image, NULL);
        draw_sprite(g, list_head);
        sfRenderWindow_display(g.w.window);
    }
    g = window_close(g, list_head);
}

glo event(glo g, ListNode* list_head)
{
    if (g.w.event.type == sfEvtClosed) {
        sfRenderWindow_close(g.w.window);
    }
    g = event_click(g, list_head);
    g = write_text(g);
    g = event_draw(g);
    return (g);
}

glo event_draw(glo g)
{
    if (g.w.event.type == sfEvtMouseButtonPressed
    && g.w.event.mouseButton.button == sfMouseLeft) {
        g.w.drawing = TRUE;
    } if (g.w.event.type == sfEvtMouseButtonReleased
    && g.w.event.mouseButton.button == sfMouseLeft) {
        g.w.drawing = FALSE;
    }
    return (g);
}
