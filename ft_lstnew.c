/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:10:42 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 19:04:51 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Crea un nuevo nodo para una lista vinculada y lo inicializa con el 
'contenido' dado. Asigna memoria para el nuevo nodo usando 'malloc' y, 
si la asignación falla, devuelve NULL. El 'contenido' se establece en la 
entrada proporcionada y el puntero 'siguiente' se inicializa en NULL. 
Finalmente, devuelve un puntero al nodo recién creado. */

// PROCESO
/* declarar un nuevo elemento de lista */
/* le asignamos memoria */
/* establece las nuevas variables del elemento 
	* nuevo->contenido = contenido
	* nuevo->siguiente = NULL  */
/* devuelve el nuevo elemento */

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/* int	main(void)
{
	t_list	*lista = ft_lstnew("Hola");
	printf ("ft_lstnew return -> %p \n", lista);
	printf ("ft_lstnew content -> %p \n", lista->content);
	printf ("ft_lstnew  next -> %p \n", lista->next);
	return (0);
} */