/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:13:43 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/07 21:51:50 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Itera a través de una lista vinculada 'lst' y aplica la función 'function' 
al contenido de cada nodo. Si 'lst' o 'function' es NULL, la función regresa ''. 
El bucle se ejecuta mientras todavía hay nodos en la lista. 
Dentro de cada iteración, la función 'function' se llama con el contenido 
del nodo actual y el puntero 'lst' se mueve al siguiente nodo de la lista. */

void	ft_lstiter(t_list *lst, void (*function)(void *))
{
	t_list	*aux;

	if (!lst || !function)
		return ;
	aux = lst;
	while (lst != NULL)
	{
		aux = aux->next;
		function(lst->content);
		lst = aux;
	}
} 

/* static void ft_change_string (void *ptr)
{
   char *str_ptr;
	str_ptr = ptr;
	*str_ptr = *str_ptr + 1;
}

static void ft_print_list(t_list *lst)
{
	int	node;
	char	*str_content;

	node = 0;
	printf("lista ---------- \n");
	while (lst != NULL)
	{	
		str_content = (char *)lst->content;
		printf("nodo: %d, contenido: %s \n", node, str_content);
		lst = lst->next;
		node++;
	}
}

int main (void)
{
    char *str1 = malloc (2);
	str1[0] = '1';
    char *str2 = malloc (2);
	str2[0] = '2';
    char *str3 = malloc (2);
	str3[0] = '3';

	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_print_list(node1);

	ft_lstiter(node1, ft_change_string);
	ft_print_list(node1);
	return(0);
} */
