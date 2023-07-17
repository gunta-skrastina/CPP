# _*_ MakeFile _*_

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

NAME = convert

SRC = main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re