NAME = megaphone

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	c++ -c $(FLAGS) -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
