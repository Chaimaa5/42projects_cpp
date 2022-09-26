NAME = Zombie
CC = clang++
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
	
re: fclean all