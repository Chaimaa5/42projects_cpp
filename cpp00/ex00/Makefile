# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 15:54:08 by cel-mhan          #+#    #+#              #
#    Updated: 2022/09/23 15:54:08 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = megaphone.cpp 
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean: 
	rm -f $(NAME)
re: fclean all