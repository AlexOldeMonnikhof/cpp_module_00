NAME        = array
SRC     	= main.cpp
OBJ_DIR		= obj
OBJ     	= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
FLAGS		= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	c++ -g $(FLAGS) -c $< -o $@


$(OBJ_DIR):
	@mkdir -p obj

clean:
	rm -rf $(OBJ) $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all