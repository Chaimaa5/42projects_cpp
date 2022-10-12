# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 15:54:16 by cel-mhan          #+#    #+#              #
#    Updated: 2022/09/23 15:54:16 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = phonebook.cpp phonebook.class.cpp contact.class.cpp
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
fclean: 
	rm -f $(NAME)
re: fclean all