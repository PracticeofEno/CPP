NAME = ex02
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

CFLAGS += -I ./inc/

FILES = 

SRCS = $(addprefix srcs/, $(addsuffix .cpp, $(FILES))) 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : 
	$(CC) $(CFLAGS) -g -o $(NAME) main2.cpp 

%.o : %.cpp
	$(CC) $(CFLAGS) -g -c -o $@ $^

clean :
	rm -f $(OBJS) $(C_OBJS)

fclean :
	rm -f $(OBJS) $(C_OBJS) $(NAME)

re : fclean all

.PHONY: clean fclean all re bonus
