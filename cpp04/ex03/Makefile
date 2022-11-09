NAME = interface
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all