NAME = megaphone
SRC = megaphone.cpp
VPATH = src
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
OBJ_DIR = obj
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "megaphone compiled\n"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(FLAGS) -o $@ -c $<

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean:
	@rm -rf $(NAME) $(OBJ_DIR)

re: fclean all

PHONE: all clean fclean re