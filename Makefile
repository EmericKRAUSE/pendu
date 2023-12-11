NAME = pendu.a
MAKEFLAGS += --silent
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = src/check_for_occurence.c\
		src/create_tab.c\
		src/display_word.c\
		src/ft_strlen.c\
		src/is_finished.c

MAIN = pendu.c
EXE = exe
OBJ = $(SRC:.c=.o)

all: $(NAME)

run: $(EXE)

$(NAME): $(OBJ)
	ar crs $@ $^

$(EXE): $(NAME) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) -o $@ $(NAME) && ./$(EXE) && rm -f $(EXE)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all run clean fclean re