#ifndef LIBLIST_H
# define LIBLIST_H
# include <stdlib.h>
# include <unistd.h>


typedef struct list
{
	int			data;
	struct list *next;
}				t_list;

void array_to_list(int a[], int size, t_list **list);
t_list			*list_new_node(int data);
void			list_del_node(t_list **node);
void			list_delete(t_list **list);
void			list_add_node_start(t_list **list, t_list *node);
void			list_add_node_last(t_list **list, t_list *node);
void			print_list(t_list *list);
void			list_delete_top(t_list **top);
int				list_len(t_list *list);
int				list_is_ascending(t_list *list);

void			swap_top(t_list **top);
void			rotate_up(t_list **head);
void			rotate_down(t_list **head);


#endif
