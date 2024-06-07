/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:11:01 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/07 17:01:30 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Elimina un único nodo 'lst' de la lista vinculada y libera su contenido
usando la función 'del', luego desasigna la memoria para el nodo. 
Sin embargo, no logra eliminar 'lst' de la lista por completo, ya que solo
establece el puntero 'lst' local en NULL. 
La vinculación de la lista debe realizarse externamente. */

// PROCESO
/* 1. Llama a la función 'del' para liberar la memoria del contenido (si se 
asignó dinámicamente). Este paso asegura que la memoria ocupada por el contenido
del elemento se libere adecuadamente.
2. Después de liberar el contenido, el elemento en sí se desasigna utilizando
la función free para liberar la memoria ocupada por el elemento.
3. Finalmente, el puntero 'lst' (pasado como parámetro) se establece en NULL. 
Sin embargo, es importante tener en cuenta que esta acción no afecta el puntero
original fuera de esta función ya que es una copia del puntero original pasado
a la función. */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}

/* void del_string (void *str)
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
	printf("lista ---------- \n ");
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

	ft_lstdelone(node2, del_string);
	ft_print_list(node1);

	return(0);
} */
