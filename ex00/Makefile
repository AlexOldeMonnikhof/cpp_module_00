NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "megaphone compiled\n"

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME) $(OBJ)

re: fclean all

PHONE: all clean fclean re