/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:57:22 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/25 12:33:56 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función memchr() escanea los n bytes iniciales del 
área de memoria señalada por s para la primera instancia de c.  
Tanto c como los bytes del área de memoria apuntados
por s se interpretan como caracteres sin firmar. */

/* la búsqueda se hace para c convertido a un ''unsigned char'', 
por lo que tenemos que convertir tanto caracter como str a 'unsigned char' */
/* recorre la cadena de bytes hasta que nuestro contador sea igual a n */
/* compara el byte actual con c */
/* si son iguales, devuelve la dirección de este byte como un vacío */
/* si buscamos n bytes y no encontramos lo que buscábamos -> devolver NULO */
/* como puedes ver, esto está muy cerca de strchr y strrchr funciones */

void	*ft_memchr(const void *str, int caracter, unsigned int num)
{
	unsigned char	*str_ptr;
	unsigned char	caracter_char;
	unsigned int	indice;

	str_ptr = (unsigned char *) str;
	caracter_char = (unsigned char) caracter;
	indice = 0;
	while (indice < num)
	{
		if (str_ptr[indice] == caracter_char)
		{
			return ((void *)(str_ptr + indice));
		}
		indice++;
	}
	return (NULL);
}

/* int main(void)
{

    return (0);
} */
