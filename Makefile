##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile that build the project
##

NAME	=		my_paint

CFLAGS	= 		-W -Wall -Wextra

SRC		=		./lib/my/hidden.c \
				./lib/my/min_to_maj.c \
				./lib/my/my_getnbr.c \
				./lib/my/my_nbrlen.c \
				./lib/my/my_put_nbr.c \
				./lib/my/my_put_tab.c \
				./lib/my/my_putchar.c \
				./lib/my/my_putstr.c \
				./lib/my/my_str_compare.c \
				./lib/my/my_str_to_word_array.c \
				./lib/my/my_strcat.c \
				./lib/my/my_strcpy.c \
				./lib/my/my_strcut.c \
				./lib/my/my_strdup.c \
				./lib/my/my_strlen.c \
				./lib/my/str_without_char.c \
				./lib/my/verif_int.c \
				./lib/my/write_error.c \
				./src/set_lines_tool_bar.c \
				./src/write_text_r.c \
				./src/write_text_g.c \
				./src/write_text_b.c \
				./src/write_text.c \
				./src/write_text_size.c \
				./src/write_text_opac.c \
				./src/write_text_file.c \
				./src/write_text_sfile.c \
				./src/set_sprite.c \
				./src/draw_sprite.c \
				./src/draw_sprite2.c \
				./src/destroy_all.c \
				./src/clock.c \
				./src/function_linked_list_circle.c \
				./src/verif_what_color_take.c \
				./src/verif_what_color_take2.c \
				./src/set_sprite_col.c \
				./src/set_sprite_rgb.c \
				./src/set_sprite_sty.c \
				./src/event_click_color.c \
				./src/event_click_color2.c \
				./src/event_click_edition.c \
				./src/event_click_edition2.c \
				./src/event_click_file.c \
				./src/event_click_file2.c \
				./src/event_click.c \
				./src/window_close.c \
				./src/set_sprite_win.c \
				./src/set_sprite_fil.c \
				./src/init_struct.c \
				./src/click_ae.c \
				./src/click_ae2.c \
				./src/init_struct2.c \
				./src/main.c \

OBJ		=		$(SRC:.c=.o)

CSFML	=		-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

I	=		-I../include

all:	$(OBJ)
		gcc -o my_paint $(SRC) -lcsfml-graphics -lcsfml-system -lcsfml-audio
		-lcsfml-window
		make clean

apple:	$(OBJ)
		/usr/bin/arch -x86_64 gcc $(SRC) -o $(NAME) $(I) $(CFLAGS) $(CSFML)
		make clean

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

debug:	CFLAGS+= -g
debug:	all

perf:	fclean
perf:	CFLAGS+= -pg
perf:	all

re:	fclean all
re_apple:	fclean apple
