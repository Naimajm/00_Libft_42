/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:44:26 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/25 14:21:15 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Compara los primeros n caracteres de las cadenas s1 y s2. 
Itera a través de los caracteres de s1 y s2 usando un bucle while, 
verificando si son iguales y si n es mayor que 1. 
Devuelve la diferencia entre los últimos caracteres comparados, 
que representa el orden lexicográfico de las cadenas.
*/

int	ft_strncmp(const char *str1, const char *str2, unsigned int num)
{
	unsigned char	*str1_ptr;
	unsigned char	*str2_ptr;
	unsigned int	indice;

	str1_ptr = (unsigned char *) str1;
	str2_ptr = (unsigned char *) str2;
	indice = 0;
	if (num == 0)
		return (0);
	while ((indice < num) && (str1_ptr[indice] || str2_ptr[indice]))
	{
		if (str1_ptr[indice] == str2_ptr[indice])
			indice++;
		else if (str1_ptr[indice] > str2_ptr[indice])
			return (1);
		else
			return (-1);
	}
	return (0);
}
