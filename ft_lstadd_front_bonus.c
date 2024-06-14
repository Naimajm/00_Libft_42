/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:06:55 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/06 13:08:57 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Agrega el elemento dado 'nuevo' al frente de la lista vinculada 'lst' a la 
que apunta 'lst'. Si 'lst' o 'new' es NULL, la función regresa. El puntero 
'next' de 'new' se establece en el primer elemento actual de la lista, 
y 'new' se convierte en el nuevo primer elemento actualizando el puntero 
'lst' para que apunte a él. */

// PROCESO
/* estableciendo la  dirección del nuevo elemento 'next' para que apunte
al inicio de la lista existente */
/* establece puntero de la lista existente para que apunte al nuevo elemento */

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (!lst || !new_node)
		return ;
	new_node->next = *lst;
	*lst = new_node;
}

/* static void	ft_print_list(t_list *lst)
{
	int	node;
	node = 0;
	while (lst != NULL)
	{
		printf("nodo: %d, contenido: %p \n", node, lst->content);
		lst = lst->next;
		node++;
	}
}

int	main(void)
{
	t_list *new1 = ft_lstnew("str1");
	t_list *new2 = ft_lstnew("str2"); 
	printf("new1 content: %p \n", new1->content);
	printf("new2 content: %p \n", new2->content);

	ft_lstadd_front(&new1, new2);
	printf("nodo1 content: %p \n", new1->content);
	printf("nodo2 next->content: %p \n", new1->next->content);
	ft_print_list(new1);

	return (0);
} */