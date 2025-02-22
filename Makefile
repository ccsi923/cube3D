# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 12:54:45 by emgarcia          #+#    #+#              #
#    Updated: 2023/04/24 13:38:18 by emgarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c														\
			parse/parse_map.c parse/validations.c parse/fill_data.c		\
			parse/parse_map2.c parse/covered.c							\
			utils/error.c utils/free_all.c utils/remunder.c				\
			utils/parse_angle.c utils/tile_value.c utils/free_split.c	\
			utils/valid_map_char.c utils/close_red_cross.c				\
			utils/close_window.c utils/to_rad.c							\
			utils/print_double_pointer.c utils/double_pointer_len.c		\
			utils/get_color.c utils/dist.c utils/pixel_color.c			\
			utils/duplicate_char_matrix.c								\
			graphics/init_window.c										\
			graphics/draw_pixel.c graphics/draw_player.c				\
			graphics/draw_pov.c	graphics/draw_minimap.c					\
			graphics/coll_finder.c										\
			game/game_loop.c
LIBFT	=	Libft/libft.a
OBJS	=	${SRCS:.c=.o}
NAME	=	cub3D
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -Imlx
# CFLAGS	=	-Wall -Wextra -Werror -Imlx -g3 -fsanitize=address
RM		=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	@make -C Libft
	@${CC} ${CFLAGS} ${LIBFT} ${OBJS} -Iincludes -lmlx -framework OpenGL -framework AppKit -o ${NAME}

clean:
	@cd Libft ; make fclean
	@${RM} ${OBJS} ${OBJS_B}

fclean: clean
	@cd Libft : make fclean
	@${RM} ${NAME} ${NAME_B} 

re: fclean all