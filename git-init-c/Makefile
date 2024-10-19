# NTX-Makefile
# By Kirno

CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -Llib/my -lmy
SRC = main.c
OBJ = $(SRC:.c=.o)
NAME = my_program

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
