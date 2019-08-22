# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/16 19:31:18 by mmamalek          #+#    #+#              #
#    Updated: 2019/08/22 07:02:39 by mmamalek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	liblist.a
CC =	gcc
CFLAGS= -Wall -Wextra -Werror
SRC =	array_to_list.c \
		list_add_node_last.c \
		list_add_node_start.c \
		list_del_node.c \
		list_delete.c \
		list_delete_top.c \
		list_len.c \
		list_new_node.c \
		list_is_ascending.c \
		print_list.c \
		rotate_down.c \
		rotate_up.c \
		swap_top.c 
OBJ =	array_to_list.o \
		list_add_node_last.o \
		list_add_node_start.o \
		list_del_node.o \
		list_delete.o \
		list_delete_top.o \
		list_len.o \
		list_new_node.o \
		list_is_ascending.o \
		print_list.o \
		rotate_down.o \
		rotate_up.o \
		swap_top.o

all:	$(NAME)

$(NAME):$(OBJ)
	@echo creating $(NAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@echo removing $(NAME) object files
	@rm -f $(OBJ)

fclean: clean
	@echo removing $(NAME) binary file
	@rm -f $(NAME)

re: fclean all
