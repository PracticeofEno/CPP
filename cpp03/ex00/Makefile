NAME = ex00
CFLAGS = -Wall -Wextra -Werror
CC = clang++

CFLAGS += -I ./inc/

FILES =  ClapTrap

SRCS = $(addprefix srcs/, $(addsuffix .cpp, $(FILES))) 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -g -o $(NAME) main.cpp $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean :
	rm -f $(OBJS) $(C_OBJS)

fclean :
	rm -f $(OBJS) $(C_OBJS) $(NAME)

re : fclean all

.PHONY: clean fclean all re bonus
