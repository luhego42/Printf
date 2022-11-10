# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luhego <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:40:59 by luhego            #+#    #+#              #
#    Updated: 2022/11/02 15:48:15 by luhego           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	cc

SRC		=	ft_putnbr_base.c \

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

$(NAME)	:	$(OBJ)
				ar rc $(NAME) $(OBJ)

all		;	$(NAME)

clean	:
			rm -rf $(OBJ)
			@echo ".o fies have been removed"

fclean	:	clean
				rm -rf $(NAME)
				@echo ".o and .a files have been removed"

re		:	fclean all

.PHONY	:	al clean fclean re
