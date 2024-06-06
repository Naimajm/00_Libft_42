/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:17:34 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/06 13:05:47 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Agrega el elemento dado 'new_elem' al final de la lista vinculada a la que 
apunta 'lst'. Si 'lst' o 'new' es NULL, la función regresa. 
Si 'lst' es una lista vacía, 'new_elem' se convierte en el primer elemento. 
De lo contrario, la función recorre la lista hasta llegar al último elemento 
y le vincula "new_elem". */

// PROCESO
/* obtenemos el último elemento de la lista */
/* si next es NULL, no hay ninguna lista, por lo que configuramos el puntero 
de la lista para señalar el nuevo elemento */
/* establece la última->next variable para que apunte al nuevo elemento */


void	ft_lstadd_back(t_list **lst, t_list *new_elem)
{
	t_list	*last_elem;

	 if (!lst || !new_elem)
	 	return ;	
	last_elem = ft_lstlast(*lst);
	if(!last_elem)
	{
		*lst = new_elem;
		return ;
	}	
	last_elem->next = new_elem;	
}

/* static void	ft_print_list(t_list *lst)
{
	int	node;
	node = 1;
	while (lst != NULL)
	{
		printf("nodo: %d, contenido: %p \n", node, lst->content);
		lst = lst->next;
		node++;
	}
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("nodo 1");
	t_list	*node2 = ft_lstnew("nodo 2");
	t_list	*node3 = ft_lstnew("nodo 3");

	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	ft_print_list(node1);
	printf("tamaño lista: %d \n", ft_lstsize(node1));

	t_list	*node4 = ft_lstnew("nodo 4");
	ft_lstadd_back(&node1, node4);
	
	printf("puntero a ultimo nodo añadido 'nodo4': %p \n", ft_lstlast(node1));
	ft_print_list(node1);
	printf("tamaño lista: %d \n", ft_lstsize(node1));
	return (0);
} */
