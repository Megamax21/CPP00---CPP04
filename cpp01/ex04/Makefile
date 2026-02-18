NAME = sedIsForLosers

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g

SRCS =	main.cpp \
		ft_sed.cpp 

HEADERS = ft_sed.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
