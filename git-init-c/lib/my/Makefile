##
## EPITECH PROJECT, 2024
## kirno
## File description:
## Git-Init-C - lib/my/Makefile
##

SRC     = my_compute_power_rec.c \
          my_compute_square_root.c \
          my_find_prime_sup.c \
          my_getnbr.c \
          my_isneg.c \
          my_is_prime.c \
          my_print_hex_chars.c \
          my_print_mem_address.c \
          my_putchar.c \
          my_put_nbr.c \
          my_putstr.c \
          my_return.c \
          my_revstr.c \
          my_showmem.c \
          my_showstr.c \
          my_sort_int_array.c \
          my_strcapitalize.c \
          my_strcat.c \
          my_strcmp.c \
          my_strcpy.c \
          my_str_isalpha.c \
          my_str_islower.c \
          my_str_isnum.c \
          my_str_isprintable.c \
          my_str_isupper.c \
          my_strlen.c \
          my_strlowcase.c \
          my_strncat.c \
          my_strncmp.c \
          my_strncpy.c \
          my_strstr.c \
          my_strupcase.c \
          my_swap_char.c \
          my_swap.c

OBJ     = $(SRC:.c=.o)
NAME    = libmy.a
INCLUDE_DIR = ../../include

all: $(NAME) clean

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@cc -I$(INCLUDE_DIR) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all