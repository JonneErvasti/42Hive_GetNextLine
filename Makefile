# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jervasti <jonne.ervasti@student.hive.fi>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 12:17:36 by jervasti          #+#    #+#              #
#    Updated: 2022/01/26 13:45:58 by jervasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = getit

SRC = main.c get_next_line.c

FLAGS = -Wall -Wextra -Werror

LIB = -L libft -lft

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(FLAGS) -o $(NAME) $(SRC) -I libft $(LIB)
	@./getit lines.txt lorem.txt

copy:
	@echo Making a backup folder
	@if [ ! -d ./backup ]; then mkdir backup/; fi
	@cp -r *.c Makefile libft/ author ./backup
	@echo Done!

clean:
	@echo Cleaning object files...
	@make -C libft clean
	@echo "Done!"

fclean: clean
	@echo Cleaning binary...
	@make -C libft fclean
	@rm -r $(NAME)
	@echo Done!

re: fclean all

.PHONY: all clean fclean re
