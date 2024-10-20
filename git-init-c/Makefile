##
## EPITECH PROJECT, 2024
## kirno
## File description:
## Git-Init-C - Makefile
##

LIB_DIR    = lib/my
INCLUDE_DIR = include
SRC_DIR    = $(LIB_DIR)

SRC        = $(wildcard $(SRC_DIR)/*.c)
OBJ        = $(SRC:.c=.o)
LIB_NAME   = libmy.a

CC         = cc
CFLAGS     = -I$(INCLUDE_DIR) -Wall -Wextra
LDFLAGS    = -L$(LIB_DIR) -lmy

EXEC       = my_program

all: $(LIB_NAME) $(EXEC)

$(LIB_NAME): $(OBJ)
	@$(MAKE) -C $(LIB_DIR)
	@cp $(LIB_DIR)/$(LIB_NAME) .

$(EXEC): $(LIB_NAME) main.o
	@$(CC) -o $(EXEC) main.o $(LDFLAGS)

main.o: main.c
	@$(CC) $(CFLAGS) -c main.c

clean:
	@rm -f $(OBJ) main.o
	@$(MAKE) -C $(LIB_DIR) clean

fclean: clean
	@rm -f $(LIB_NAME) $(EXEC)
	@$(MAKE) -C $(LIB_DIR) fclean

re: fclean all