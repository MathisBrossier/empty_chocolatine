##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Build and clean my lib
##

CC = gcc
SRC_DIR = lib
SRC = $(SRC_DIR)/my_compute_power_rec.c $(SRC_DIR)/my_isneg.c \
$(SRC_DIR)/my_showmem.c $(SRC_DIR)/my_str_isnum.c \
$(SRC_DIR)/my_strcat.c $(SRC_DIR)/my_strlowcase.c \
$(SRC_DIR)/my_strupcase.c $(SRC_DIR)/my_compute_square_root.c \
$(SRC_DIR)/my_put_nbr.c $(SRC_DIR)/my_showstr.c \
$(SRC_DIR)/my_str_isprintable.c $(SRC_DIR)/my_strcmp.c \
$(SRC_DIR)/my_strncat.c $(SRC_DIR)/my_swap.c \
$(SRC_DIR)/my_find_prime_sup.c $(SRC_DIR)/my_putchar.c \
$(SRC_DIR)/my_sort_int_array.c $(SRC_DIR)/my_str_isupper.c \
$(SRC_DIR)/my_strcpy.c $(SRC_DIR)/my_strncmp.c \
$(SRC_DIR)/my_getnbr.c $(SRC_DIR)/my_putstr.c \
$(SRC_DIR)/my_str_isalpha.c $(SRC_DIR)/my_str_to_word_array.c \
$(SRC_DIR)/my_strdup.c $(SRC_DIR)/my_strncpy.c \
$(SRC_DIR)/my_is_prime.c $(SRC_DIR)/my_revstr.c \
$(SRC_DIR)/my_str_islower.c $(SRC_DIR)/my_strcapitalize.c \
$(SRC_DIR)/my_strlen.c $(SRC_DIR)/my_strstr.c
OBJ_DIR = obj
OBJ	= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
NAME = libmy
CFLAGS = -Wall -Werror -Iinclude

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rcs $(NAME).a $(OBJ_LIB) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -rf obj

fclean: clean
	rm -f $(NAME).a

re : fclean all
