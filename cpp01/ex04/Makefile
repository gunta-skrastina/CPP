# _*_ MakeFile _*_

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = better_than_sed

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)
	rm -f test.txt*
	rm -f test2.txt*

fclean: clean

re: fclean all

.PHONY: all clean fclean re