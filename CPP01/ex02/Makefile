NAME = HI_THIS_IS_BRAIN
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = main.o

all: $(NAME)

$(OBJ): $(SRC)
	@$(CPP) $(CPPFLAGS) -c $(SRC) -o $@

$(NAME): $(OBJ) 
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
