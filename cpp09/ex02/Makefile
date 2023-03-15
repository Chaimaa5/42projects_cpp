# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 20:28:28 by cel-mhan          #+#    #+#              #
#    Updated: 2023/03/15 20:28:28 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp PmergeMe.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all