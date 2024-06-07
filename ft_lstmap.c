/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 21:53:25 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/07 23:05:13 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Crea una nueva lista enlazada aplicando la función 'function' al contenido 
de cada nodo en la lista de entrada 'lst'. Si 'lst', 'function' o 'del' es NULL 
o si falla la asignación de memoria, devuelve NULL. Utiliza 'lst_new' para 
crear nuevos nodos y los vincula para formar la lista resultante. Si alguna 
asignación de memoria falla durante el proceso, borra los nodos ya creados y 
devuelve NULL. La función 'del' se utiliza para liberar la memoria asignada 
para el contenido de cada nodo si es necesario. */

//PROCESO
/* comprobar si lst o 'function' o 'del' es NULL */
/* recorre la lista existente */
	/* crea un nuevo nodo cuyo contenido es el resultado de la aplicación de 
	la función function sobre el contenido del elemento actual */
	/* si el nuevo elemento es nulo, borra la nueva lista */	
	/* si hay un objeto nuevo, agréguelo al final de la nueva lista */
/* finalmente, devuelve la nueva lista */

t_list	*ft_lstmap(t_list *lst, void *(*function)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !function || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = function(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* static void ft_change_string (void *ptr)
{
   char *str_ptr;
	str_ptr = ptr;
	*str_ptr = *str_ptr + 1;
}

 void ft_del_string (void *str)
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
	t_list	*new_list;

	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	printf("lista original \n");
	ft_print_list(node1);

	new_list = ft_lstmap(node1, (void *)ft_change_string, ft_del_string);
	printf("Nueva lista \n");
	ft_print_list(new_list);
	return(0);
} */
