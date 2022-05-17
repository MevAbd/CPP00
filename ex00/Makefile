SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

.c.o:
	c++ $(FLAGS) -cpp $< -o $(<:.cpp=.o)

NAME = megaphone

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
