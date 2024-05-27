/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:11:58 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/27 17:13:02 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copia una cadena terminada en nulo de src a destino, 
asegurando una terminación nula adecuada dentro de un 
tamaño limitado de n. 
Devuelve la longitud de la cadena fuente. */

/* obtenemos la longitud de src */
/* comprueba si dstsize es lo suficientemente grande como 
para acomodar la longitud del src más el carácter NUL	*/
/* copia todo el src en dst */
/* demás */
/* copia dstsize - 1 carácter en dst */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int destsize)
{
	unsigned int	index;
	unsigned int	src_len;

	index = 0;
	src_len = (unsigned int) ft_strlen(src);
	if (destsize != 0)
	{
		while ((index < (destsize - 1)) && src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (src_len);
}

/* unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
} */
