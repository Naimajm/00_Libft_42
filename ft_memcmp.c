/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:00:10 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/25 13:37:39 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compara los bloques de memoria a los que apuntan
 s1 y s2 hasta una longitud especificada n. 
Itera a través de los bloques de memoria usando un bucle
 while, comparando cada byte. 
Si un byte en s1 no es igual al byte correspondiente en s2, 
devuelve la diferencia entre los dos bytes. 
Si todos los bytes son iguales dentro de la longitud especificada, 
devuelve 0 para indicar que los bloques de memoria son iguales.
*/

int	ft_memcmp(const void *str1, const void *str2, unsigned int num)
{
	unsigned char	*str1_ptr;
	unsigned char	*str2_ptr;
	unsigned int	indice;

	str1_ptr = (unsigned char *) str1;
	str2_ptr = (unsigned char *) str2;
	indice = 0;
	if (num == 0)
		return (0);
	while (indice < num)
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
