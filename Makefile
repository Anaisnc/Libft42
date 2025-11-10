NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(HEADER)
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
ft_isprint.c ft_memset.c ft_strlen.c
OBJ= $(SRC:.c=.o)
HEADER= includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re