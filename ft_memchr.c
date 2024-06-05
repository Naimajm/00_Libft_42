/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:57:22 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 11:14:52 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Busca la primera aparición del carácter c en el bloque de memoria al que 
apunta str, hasta una longitud especificada n. Itera a través del bloque de 
memoria usando un bucle while y verifica si cada byte coincide con c. Si se 
encuentra una coincidencia, devuelve un puntero a ese byte. Si no se encuentra
ninguna coincidencia dentro de la longitud especificada, devuelve NULL. */

/* la búsqueda se hace para c convertido a un ''unsigned char'', 
por lo que tenemos que convertir tanto caracter como str a 'unsigned char' */
/* recorre la cadena de bytes hasta que nuestro contador sea igual a n */
/* compara el byte actual con c */
/* si son iguales, devuelve la dirección de este byte como un vacío */
/* si buscamos n bytes y no encontramos lo que buscábamos -> devolver NULO */
/* como puedes ver, esto está muy cerca de strchr y strrchr funciones */

void	*ft_memchr(const void *str, int character, unsigned int num)
{
	unsigned char	*str_ptr;
	unsigned char	chr;
	unsigned int	index;

	str_ptr = (unsigned char *) str;
	chr = (unsigned char) character;
	index = 0;
	while (index < num)
	{
		if (str_ptr[index] == chr)
		{
			return ((void *)(str_ptr + index));
		}
		index++;
	}
	return (NULL);
}

/* int	main(int argn, char **argv)
{
	char	*str = argv[1];
	char	character = argv[2][0];
	int	num = argv[3][0] - '0';
	
    if (argn > 3)
	{
		printf("argumentos -> str '%s' , character '%c' , num '%d' \n"
			, str, character, num);
		printf("ft_memchr -> return %s \n", 
            (char *) ft_memchr(str, character, num));
	}  
    return (0);
} */
