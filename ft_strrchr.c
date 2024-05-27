/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:23:51 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/27 13:40:50 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Busca la última aparición del carácter c en la cadena str. 
Itera a través de los caracteres de str usando un bucle while, 
actualizando un puntero auxiliar cada vez que se encuentra una coincidencia. 
Después del bucle, comprueba si el último carácter de str coincide con c y, 
si es así, devuelve un puntero a ese carácter. 
De lo contrario, devuelve el puntero aux, que apunta a la última aparición de c 
o NULL si no se encuentra ninguna coincidencia. */

/* mismo código que ft_strchr() pero no regresar el valor tan pronto
 como encontramos el carácter, simplemente estableciendo una variable cada vez, 
 y devolviéndolo al final de la función */
/* recorre toda la cadena */
/* comprobamos si el carácter actual es igual al que tenemos que encontrar */
/* una vez que recorrimos toda la cadena, verificamos nuevamente el carácter,
	en caso de que el carácter que tenemos que encontrar sea '\0' */
/* si no encontramos c en la cadena, devolvemos NULL */

char	*ft_strrchr(const char *str, int character)
{
	unsigned char	chr;
	unsigned int	len;

	len = (unsigned int) ft_strlen(str);
	chr = (unsigned char) character;
	while (len + 1 > 0)
	{
		if (str[len] == chr)
			return ((char *)(str + len));
		len--;
	}
	return (0);
}
