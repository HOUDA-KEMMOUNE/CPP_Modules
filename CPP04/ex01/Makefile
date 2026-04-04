NAME = Brain
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
