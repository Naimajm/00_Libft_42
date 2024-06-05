/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:19:29 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 11:56:17 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Duplicar cadenas, que proporciona una nueva cadena asignada dinámicamente 
con el mismo contenido que la cadena de origen. 
Se puede incorporar cuando es necesario crear una copia de una cadena terminada
en nulo, especialmente cuando se maneja la asignación de memoria dinámica. */

// PROCESO
/* utilizamos malloc para asignar suficiente espacio para DEST 
//a signando suficiente memoria para s1 + 1 -carácter que termina en NUL
*tendremos que copiarlo por completo necesitamos suficiente espacio para ello */
/* recorre s1 y copia cada carácter en la nueva cadena recién asignado */
/* devuelve la cadena asignada y copiada */

char	*ft_strdup(const char *str)
{
	unsigned int	len;
	unsigned char	*dest;

	len = ft_strlen(str);
	dest = malloc((size_t)(len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy((char *)dest, str, len + 1);
	return ((char *)dest);
}

/* int	main(int argn, char **argv)
{
	char	*str = argv[1];
	
    if (argn > 1)
	{
		printf("argumentos -> str '%s' \n", str);
		printf("ft_strdup -> return %s \n", ft_strdup(str));
	}  
    return (0);
} */
