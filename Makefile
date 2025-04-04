##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile for my hunter the project
##

NAME = my_world
CFLAGS = -Iinclude \
	-lcsfml-graphics -lcsfml-window \
	-lcsfml-system -lcsfml-audio \
	-lm \
	-W -Wall -Wextra \

SRC = 	src/main.c \
		src/events.c \
		src/draw/draw.c \
		src/inits.c \
		src/draw/draw_2dmap.c \
		src/draw/draw_square.c \
		src/draw/draw_line.c \
		src/draw/perline_noise.c \
		src/draw/draw_button.c \

all: $(NAME)

$(NAME):
	mkdir -p bin
	make -C libs/garbage_collector
	cp libs/garbage_collector/libgarbage.a bin/
	cp libs/garbage_collector/include/garbage.h include/
	make -C libs/my_lib
	cp libs/my_lib/libmy.a bin/
	cp libs/my_lib/include/my.h include/
	gcc -o $(NAME) $(SRC) -Lbin -lgarbage -lmy $(CFLAGS)

clean:
	rm -f a.out
	rm -rf bin

fclean: clean
	make -C libs/garbage_collector fclean
	make -C libs/my_lib fclean
	-rm -f unit_tests
	-rm -f coverage.json
	-rm -f tests

re : fclean all

tests_run:
	@echo "Running tests..."


debug: CFLAGS += -g
debug: re
	valgrind --leak-check=full ./$(NAME)
