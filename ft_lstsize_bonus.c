/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:24:16 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/06 11:48:42 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Calcula y devuelve el número de nodos en una lista vinculada determinada 
'lst'. Inicializa una variable 'i' en 0 y luego recorre la lista usando un 
bucle, incrementando 'i' para cada nodo encontrado hasta llegar al final de 
la lista (lst se convierte en NULL). Luego, la función devuelve el valor final 
de 'i', que representa el número total de nodos en la lista. */

//PROCESO
/* recorre la lista */
/* hacemos un bucle siempre que lst no sea igual a nulo, desde el nodo-> next
del último elemento distinto a nulo, iteraremos sobre todos los elementos 
de la lista */
/* devuelve el conteo */

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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
 	t_list *node1 = ft_lstnew("nodo 1");
	t_list *node2 = ft_lstnew("nodo 2"); 
	t_list *node3 = ft_lstnew("nodo 3"); 
	printf("node1 content: %p \n", node1->content);
	printf("node2 content: %p \n", node2->content);
	printf("node3 content: %p \n", node3->content);

	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	ft_print_list(node1);

	printf("tamaño lista: %d \n", ft_lstsize(node1));
	return (0);
} */
