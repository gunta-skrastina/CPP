# _*_ MakeFile _*_

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

NAME = bureaucrat

SRC = 	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf *_shrubbery

re: fclean all

.PHONY: all clean fclean re