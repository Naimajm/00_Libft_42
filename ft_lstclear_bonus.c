/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:05:08 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/07 20:11:43 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Borra toda la lista enlazada a la que apunta 'lst' y desasigna memoria para
cada nodo. La función 'del' se utiliza para liberar la memoria asociada al 
contenido de cada nodo. 
Si 'lst' es NULL, 'del' es NULL o la lista ya está vacía, la función regresa. 
La función se llama a sí misma de forma recursiva con el siguiente nodo hasta
llegar al final de la lista. Luego, libera el contenido del nodo actual, 
desasigna el nodo y establece 'lst' en NULL. */

//PROCESO
/* recorre la lista */
/* establece el 'tmp' para que apunte al siguiente elemento de la lista */
/* usar ft_lstdelone en el elemento actual */
/* establece el puntero de lista igual a tmp, de modo que tengamos un 
puntero al siguiente elemento */
/* libera el puntero de la lista y lo establece en NULL */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	aux = *lst;
	while (*lst != NULL)
	{
		aux = aux->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
}

/* void ft_del_string (void *str)
{
  if(str)
  {
   free(str);
   str = 0;
  }
}

static void ft_print_list(t_list *lst)
{
	int	node;
	node = 1;
	printf("lista ---------- \n");
	while (lst != NULL)
	{
		printf("nodo: %d, contenido: %p \n", node, lst->content);
		lst = lst->next;
		node++;
	}
} */

/* int main (void)
{
    char *str1 = malloc (2);
	str1[0] = '1';
	str1[1] = '\0';

    char *str2 = malloc (2);
	str2[0] = '2';
	str2[1] = '\0';

    char *str3 = malloc (2);
	str3[0] = '3';
	str3[1] = '\0';

	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_print_list(node1);

	ft_lstclear(&node2, ft_del_string);
	ft_lstsize(node1);
	ft_print_list(node1);
	if (!node2)
		printf("lista borrada");

	return(0);
} */
