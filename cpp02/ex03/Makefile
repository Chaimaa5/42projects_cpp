NAME = Fixed
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)
re: fclean all