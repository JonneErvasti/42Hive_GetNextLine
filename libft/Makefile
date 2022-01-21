# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:04:20 by jervasti          #+#    #+#              #
#    Updated: 2021/12/20 10:48:20 by jervasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strdup.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_strlen.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_isupper.c \
		ft_islower.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_atoi.c \
		ft_iswhitespace.c \
		ft_skipwhitespace.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
#	library, replace existing, create, generate index

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

copy: clean
	cp -R * ../backup
	cp libft.* ./eval_tests/

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
#prevent files like 'all' to crash the makefile
