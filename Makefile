NAME=libft_test

.PHONY: all bonus re clean fclean

CC=cc

CFLAGS=-Wall -Wextra -Werror

all: $(NAME)
	./$(NAME)

LF=libft.a

$(NAME): $(LF)
	cc tester.c $(LF) -o $(NAME)

$(LF):
	make -C ../libft/
	cp ../libft/libft.a ./

re: clean all

clean:
	rm -f $(NAME)
	rm -f $(LF)
	make clean -C ../libft/
