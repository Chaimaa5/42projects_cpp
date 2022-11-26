# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 17:53:50 by cel-mhan          #+#    #+#              #
#    Updated: 2022/11/24 17:54:00 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyFind
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all