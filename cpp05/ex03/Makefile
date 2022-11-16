# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cel-mhan <cel-mhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 20:25:37 by cel-mhan          #+#    #+#              #
#    Updated: 2022/11/16 20:25:37 by cel-mhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Intern
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Bureaucrat.cpp Form.cpp\
	 PresidentialPardonForm.cpp \
	 RobotomyRequestForm.cpp \
	 ShrubberyCreationForm.cpp \
	 Intern.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all