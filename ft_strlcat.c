/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:43:09 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/27 19:32:10 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Toma el tamaño completo del búfer de destino 
y garantiza la terminación NUL si hay espacio. Tenga en cuenta
que se debe incluir espacio para NUL en dstsize. 
Sólo funciona en cadenas verdaderas ''C''. 
Esto significa que tanto src como dst deben tener terminación NUL. 
Agrega la cadena src al final de dst. Agregará como 
máximo dstsize - strlen(dst) - 1 caracteres. 
Luego terminará en NUL, a menos que dstsize sea 0 o que la 
cadena dst original sea más larga que dstsize (en la práctica,
esto no debería suceder ya que significa que dstsize es incorrecto o
que dst no es una cadena adecuada).
Si las cadenas src y dst se superponen, el comportamiento no está definido.*/

/* obtenemos la longitud original de src */
/* obtenemos la longitud original de dst */
/* si la longitud de dst es igual a dstsize */
/* simplemente devuelve la dstsize + la longitud de src */
/* si dstsize es lo suficientemente grande para acomodar tanto src como dst */
/* concatenar src al final del horario de verano */
/* en caso contrario, concatenar el máximo de caracteres dstsize */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int destsize)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	dest_index;
	unsigned int	src_index;

	src_len = (unsigned int) ft_strlen(src);
	dest_len = (unsigned int) ft_strlen(dest);
	src_index = 0;
	dest_index = dest_len;
	if (!dest || destsize <= dest_len)
		return (destsize + src_len);
	while (src[src_index] != '\0' && dest_index < (destsize - 1))
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';
	return (dest_len + src_len);
}
