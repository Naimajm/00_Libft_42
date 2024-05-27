/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:23:14 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/27 11:21:09 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Busca la primera aparición de la aguja de hilo dentro del pajar, 
hasta una longitud especificada n. 
Itera a través del pajar carácter por carácter y lo compara con la aguja, 
asegurando que se cumpla la restricción de longitud. 
Si se encuentra una coincidencia, devuelve un puntero a la coincidencia. 
De lo contrario, devuelve NULL para indicar 
que no se encontró ninguna coincidencia.
*/

/* comprueba si la aguja está vacía */
/* devuelve el pajar */
/* bucle sobre el pajar */
/* mientras que el carácter actual del pajar es igual 
al correspondiente carácter en aguja */
/*comprobamos si tenemos la aguja completa */

char	*ft_strnstr(const char *src, const char *toFind, size_t num)
{
	char	*src_ptr;
	size_t	src_i;		
	size_t	tofind_j;

	src_ptr = (char *) src;
	src_i = 0;
	if (toFind[0] == 0)
		return (src_ptr);
	while (src[src_i] != '\0' && src_i < num)
	{
		tofind_j = 0;
		while ((src[src_i + tofind_j] == toFind[tofind_j])
			&& src[src_i + tofind_j]
			&& ((src_i + tofind_j) < num))
		{
			tofind_j++;
			if (toFind[tofind_j] == 0)
				return ((char *)(src + src_i));
		}
		src_i++;
	}
	return (0);
}
