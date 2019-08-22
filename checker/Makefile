NAME = checker

SRC  = 	checker.c \
		pa.c \
		pb.c \
		print_ab.c \
		ra.c \
		rb.c \
		read_list.c \
		rr.c \
		rra.c \
		rrb.c \
		rrr.c \
		sa.c \
		sb.c \
		ss.c
OBJ  = 	checker.o \
		pa.o \
		pb.o \
		print_ab.o \
		ra.o \
		rb.o \
		read_list.o \
		rr.o \
		rra.o \
		rrb.o \
		rrr.o \
		sa.o \
		sb.o \
		ss.o

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
	@echo cleaning ft_ls object files
	@rm -fr $(OBJ)

fclean: clean
	@make -C ../libft/ fclean
	@echo removing $(NAME) binary file
	@rm -fr $(NAME)

re: fclean all
