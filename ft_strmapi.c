/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:09:16 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/30 21:16:37 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Aplica una función f a cada carácter de la cadena s, generando una 
nueva cadena con los caracteres modificados. Primero determina la longitud 
de la cadena de entrada y asigna memoria para la nueva cadena. 
Luego, itera sobre los caracteres de la cadena de entrada, aplicando la 
función f y almacenando el resultado en la nueva cadena. 
Se devuelve la cadena modificada resultante. */

char	*ft_strmapi(char const *str, char (*function)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	len;
	unsigned char	*dest;

	index = 0;
	len = ft_strlen(str);
	dest = malloc (len + 1);
	if (!dest)
		return (NULL);
	while (str[index] != '\0')
	{
		dest[index] = (*function)(index, str[index]);
		index++;
	}
	dest[index] = '\0';
	return ((char *)dest);
}
