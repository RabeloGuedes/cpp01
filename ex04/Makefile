CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
NAME = sedIsForLosers

all: $(NAME)

$(NAME): main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
