NAME	= phonebook

CC		= c++
FLAGS	= -Wall -Wextra #-Werror -std=c++98
RM		= rm -rf

SRCS	= 	src/main.cpp \
			src/Contact.cpp \
			src/PhoneBook.cpp
OBJS	= $(SRCS:src/%.cpp=$(OBJ_DIR)%.o)
OBJ_DIR	= obj/

# Colors
RED		=	\033[91;1m
GREEN	=	\033[92;1m
YELLOW	=	\033[93;1m
BLUE	=	\033[94;1m
PINK	=	\033[95;1m
CLEAR	=	\033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\n\n$(BLUE)- - - Compiling $(NAME)... - - -$(CLEAR)"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)- - - SUCCESS! - - -$(CLEAR)"

$(OBJ_DIR)%.o: src/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_DIR)
	@echo "\n\n$(YELLOW)- - - Object files removed. - - -$(CLEAR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)- - - Executable removed. - - -$(CLEAR)"

.PHONY: all clean fclean re