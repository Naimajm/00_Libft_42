/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:43:50 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/27 14:00:00 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* busca un carácter en una cadena. Si encuentra el carácter, 
devuelve un puntero a la primera aparición de este carácter específico. 
Si no encuentra ninguna aparición de este carácter, devuelve NULL.
También tenemos que devolver un puntero al personaje si el personaje es \0. */

/* recorre toda la cadena */
/* comprobamos si el carácter actual es igual al que tenemos que encontrar */
/* una vez que recorrimos toda la cadena, verificamos nuevamente el carácter
 en caso de que el carácter que tenemos que encontrar sea '\0' */
/* si no encontramos c en la cadena, devolvemos NULL */

char	*ft_strchr(const char *str, int character)
{
	unsigned char	chr;
	unsigned int	indice;

	chr = (unsigned char) character;
	indice = 0;
	while (str[indice])
	{
		if (str[indice] == chr)
			return ((char *)(str + indice));
		indice++;
	}
	if (str[indice] == '\0' && str[indice] == chr)
		return ((char *)(str + indice));
	return (0);
}
