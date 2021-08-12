NAME = account
CFLAGS = -Wall -Wextra -Werror
CC = clang++

CFLAGS += -I ./inc/

FILES = Account

SRCS = $(addprefix srcs/, $(addsuffix .cpp, $(FILES))) 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	#$(CC) $(CFLAGS) -g -o $(OBJS) $(SRCS)
	$(CC) $(CFLAGS) -g -o $(NAME) tests.cpp $(OBJS)

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^
	#$(CC) $(CFLAGS) -c -o $(OBJS) $(SRCS)

clean :
	rm -f $(OBJS) $(C_OBJS)

fclean :
	rm -f $(OBJS) $(C_OBJS) $(NAME)

re : fclean all

.PHONY: clean fclean all re bonus
