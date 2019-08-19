NAME = checker

SRC  = 	checker.c \
		list_add_node_last.c \
		list_add_node_start.c \
		list_del_node.c \
		list_delete_top.c \
		list_delete.c \
		list_new_node.c \
		print_list.c \
		read_list.c \
 		rotate_down.c \
		rotate_up.c \
		swap_top.c \
		list_len.c \
		print_ab.c

OBJ  = 	checker.o \
		list_add_node_last.o \
		list_add_node_start.o \
		list_del_node.o \
		list_delete.o \
		list_delete_top.o \
		list_new_node.o \
		print_list.o \
		read_list.o \
 		rotate_down.o \
		rotate_up.o \
		swap_top.o \
		list_len.o \
		print_ab.o

CC 	=	gcc
CFLAGS= -Wall -Wextra -Werror
LIB		= -lft
LIBDIR	= -L../libft
GNL  = ../get_next_line/get_next_line.c

all: $(NAME)

$(NAME): $(OBJ)
	@echo creating $(NAME)
	make libft.a -C ../libft
	$(CC) $(CFLAGS) $(OBJ) $(GNL) $(LIBDIR) $(LIB) -o $(NAME)
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