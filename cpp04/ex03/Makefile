# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 23:24:20 by cel-mhan          #+#    #+#              #
#    Updated: 2022/11/11 23:24:20 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all