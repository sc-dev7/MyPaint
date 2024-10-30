/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my_h
*/

#ifndef MY_H_

    # define MY_H_

    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include "struct.h"
    #include <stdio.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <math.h>

    #define INTERPOLATION_STEP_TIME_MICROSECONDS 10000
    #define sfCf sfTexture_createFromFile
    #define sfWc sfRenderWindow_create
    #define sfVAa sfVertexArray_append
    #define sRGB sfColor_fromRGB
    #define sRGBA sfColor_fromRGBA
    #define sRSsO sfRectangleShape_setOutlineColor
    #define WINDOW ALL->settings.window
    #define EVENT ALL->settings.event
    #define IMG ALL->pictures
    #define BAD_RETURN 84
    #define GOOD_RETURN 0
    #define RELEASED 0
    #define CLICKED 1
    #define PRESSED 2
    #define HOVER 3
    #define TRUE 0
    #define FALSE 1
    #define CIRCLE 0
    #define RECT 1
    #define ETM g.t.elapsed_time2.microseconds
    #define CS 500000
    #define CF 1000000

int hidden(char *str_s, char *str_h);
int verif_find(int nb_f, int max_s);
int hidden2(int id_s, int max_s, int i);
int hidden1(char *str_s, char *str_h);
char *min_to_maj(char *str);
int     my_getnbr(char const *str);
int    my_nbrlen(int n);
int    my_put_nbr(int nb);
int my_put_nbr_e(int *nb, int len);
int my_put_tab(char **tab);
int my_put_tab_mod(char **tab);
void    my_putchar(char c);
int    my_putstr(char const *str);
int    my_str_compare(char *s1, char *s2);
int my_str_n_compare(char *s1, char *s2, int len);
char **my_str_to_word_array(char const *str);
int nb_line(char const *str);
int    my_strlen_bn(char const *str);
int count_nb_argc(char **tab);
char	*my_strcat(char *dest, char const *src);
int my_strcat_p(char **dest, char const *src);
char    *my_strcpy(char *dest, char const *src);
int my_cpy(char **dest, char const *src, int dep, int arr);
char *my_cpy_sp(char *dest, char const *src, int dep, int arr);
char *my_strcut(char *str, int index);
char *my_strdup(char *dest, char const *src);
int    my_strlen(char const *str);
int str_without_char(char *str, char c);
int letter_or_not(char c);
int verif_int(char *str);
int str_to_int(char *str);
char *int_to_str(int nb);
void write_error(char *str);

void draw_list(ListNode *head, sfRenderWindow *window);
void add_circle_to_list(ListNode** head, sfCircleShape *circle, int i);
void add_rect_to_list(ListNode** head, sfRectangleShape *rect, int i);
void freeList(ListNode* head);
int my_paint(glo g, int t);
void in_working(glo g);
glo init_struct(glo g, int t);
glo init_struct_clo(glo g);
glo init_struct_rgb(glo g);
glo init_struct_col(glo g);
glo init_struct_sty(glo g);
glo init_struct_fil(glo g);
void set_sprite(glo g);
void set_sprite_sty(glo g);
void set_sprite_sty1(glo g);
void set_sprite_sty2(glo g);
void set_sprite_sty3(glo g);
void set_sprite_rgb(glo g);
void set_sprite_rgb1(glo g);
void set_sprite_rgb2(glo g);
void set_sprite_col(glo g);
void set_sprite_col1(glo g);
void set_sprite_col2(glo g);
void set_sprite_col3(glo g);
void set_sprite_win(glo g);
void set_sprite_win1(glo g);
void set_sprite_win2(glo g);
void set_sprite_win3(glo g);
void set_sprite_win4(glo g);
void set_sprite_win5(glo g);
void set_sprite_fil(glo g);
void set_sprite_fil1(glo g);
glo event(glo g, ListNode* list_head);
void set_lines_tool_bar(glo g);
glo event_click(glo g, ListNode* list_head);
glo write_text_r(glo g);
glo write_text_r1(glo g, size_t len);
glo write_text_g(glo g);
glo write_text_g1(glo g, size_t len);
glo write_text_b(glo g);
glo write_text_b1(glo g, size_t len);
glo write_text(glo g);
glo write_text_size(glo g);
glo write_text_size1(glo g, size_t len);
glo write_text_opac(glo g);
glo write_text_opac1(glo g, size_t len);
glo write_text_form(glo g);
glo write_text_form1(glo g, size_t len);
glo verif_color(glo g);
void draw_sprite(glo g, ListNode* list_head);
void draw_sprite1(glo g);
void draw_sprite2(glo g);
void draw_sprite_col(glo g);
void draw_sprite_fil(glo g);
void draw_sprite_pen(glo g);
glo clock(glo g);
glo clock1(glo g);
glo clock2(glo g);
glo clock3(glo g);
glo clock4(glo g);
void set_color_pen_circle(glo g);
void set_color_pen_rect(glo g);
void set_color_eraser_circle(glo g, sfVector2f position);
void set_color_eraser_rect(glo g, sfVector2f position);
void set_color_highlighter_circle(glo g);
void set_color_highlighter_rect(glo g);
glo event_draw(glo g);
glo event_click_color(glo g);
glo event_click_edition(glo g);
glo event_click_file(glo g, ListNode* list_head);
void destroy_all(glo g);
void destroy_all1(glo g);
void destroy_all2(glo g);
void destroy_all3(glo g);
void destroy_all4(glo g);
glo write_text_file(glo g);
glo write_text_file1(glo g, size_t len);
glo write_text_sfile(glo g);
glo write_text_sfile1(glo g, size_t len);
void draw_sprite3(glo g);
void draw_sprite_pen2(glo g);
glo init_struct1(glo g, int t);
glo init_struct2(glo g, int t);
void set_lines_tool_bar2(glo g, sfVertex *l1, sfVertex *l2, sfVertex *l3);
void set_sprite_fil2(glo g);
void set_sprite_sty4(glo g);
glo event_click_file1(glo g, ListNode* list_head);
glo event_click_file2(glo g, ListNode* list_head);
glo event_click_file3(glo g, ListNode* list_head);
glo event_click_file4(glo g, ListNode* list_head);
glo event_click_file5(glo g, ListNode* list_head);
glo event_click_file6(glo g, ListNode* list_head);
glo event_click_file7(glo g, ListNode* list_head);
glo event_click_file8(glo g, ListNode* list_head);
glo event_click_color1(glo g);
glo event_click_color2(glo g);
glo event_click_color3(glo g);
glo event_click_color4(glo g);
glo event_click_color5(glo g);
glo event_click_color6(glo g);
glo event_click_color7(glo g);
glo event_click_color8(glo g);
glo event_click_edition1(glo g);
glo event_click_edition2(glo g);
glo event_click_edition3(glo g);
glo event_click_edition4(glo g);
glo event_click_edition5(glo g);
glo event_click_edition6(glo g);
glo event_click_edition7(glo g);
glo event_click_edition8(glo g);
glo event_click_edition9(glo g);
glo event_click1(glo g, ListNode* list_head);
glo event_click2(glo g, ListNode* list_head);
glo window_close(glo g, ListNode* list_head);
glo window_close2(glo g, ListNode* list_head);

#endif
