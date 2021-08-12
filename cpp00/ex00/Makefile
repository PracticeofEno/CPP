NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
CC = clang++

FILES = 


SRCS = $(addprefix srcs/, $(addsuffix .cpp, $(FILES))) 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -g -o $(NAME) main.cpp $(SRCS) $(LIBFT_FLAGS)
	
clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(OBJS) $(C_OBJS) $(NAME)
	
re : fclean all

.PHONY: clean fclean all re bonus
