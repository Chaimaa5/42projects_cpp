# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 15:27:35 by cel-mhan          #+#    #+#              #
#    Updated: 2022/11/27 15:27:37 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Span.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all