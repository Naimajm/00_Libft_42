/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:26:11 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/30 22:02:04 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Aplica una función f a cada carácter de la cadena s, junto con su índice 
correspondiente. Comprueba si tanto s como f son punteros válidos antes de 
continuar. Inicializa un contador i para realizar un seguimiento del índice 
e itera sobre los caracteres de la cadena s, aplicando la función f con el 
índice y carácter actuales.  */

void	ft_striteri(char *str, void (*function)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (str && function)
	{
		while (str[index] != '\0')
		{
			(*function)(index, str + index);
			index++;
		}
	}
}
