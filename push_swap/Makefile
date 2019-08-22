NAME = push_swap

SRC  = 	init.c \
		print_array.c \
		sort_array.c \
		push_swap.c \
		../checker/pa.c \
		../checker/pb.c \
		../checker/print_ab.c
OBJ  = 	init.o \
		print_array.o \
		sort_array.o \
		push_swap.o \
		../checker/pa.o \
		../checker/pb.o \
		../checker/print_ab.o
CC 	=	gcc
CFLAGS= -Wall -Wextra -Werror
LIB		= ../libft/libft.a ../liblist/liblist.a
GNL  = ../get_next_line/get_next_line.c

all: $(NAME)

$(NAME): $(OBJ)
	@echo creating $(NAME)
	make libft.a -C ../libft
	make liblist.a -C ../liblist
	$(CC) $(CFLAGS) $(OBJ) $(GNL) $(LIB) -o $(NAME)
	@echo installing $(NAME) to ~/bin
	@rm -f ~/bin/$(NAME)
	@cp $(NAME) ~/bin/

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@make -C ../libft/ clean
	@make -C ../liblist/ clean
	@echo cleaning $(NAME) object files
	@rm -f $(OBJ)

fclean: clean
	@rm $(LIB)
	@echo removing $(NAME) binary file
	@rm -f $(NAME)

re: fclean all
