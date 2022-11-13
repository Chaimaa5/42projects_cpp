NAME = AAnimal
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all