NAME = easyfind
VERBOSE = 1

CPP_FLAGS = -Wall -Wextra -Werror --std=c++98

CPP_FILES = main.cpp
HPP_FILES = easyfind.hpp

O_FILES = $(CPP_FILES:%cpp=%o)

.PHONY: all clean fclean re

all: $(NAME) 

$(NAME): $(O_FILES) $(HPP_FILES)
	clang++ $(CPP_FLAGS) $(O_FILES) -o $(NAME)

$(O_FILES): $(HPP_FILES)
	clang++ -c -D VERBOSE=$(VERBOSE) $(CPP_FLAGS) $(CPP_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
