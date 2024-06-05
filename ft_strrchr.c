/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:23:51 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 09:57:22 by juagomez         ###   ########.fr       */
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
	if (str[len] == '\0' && str[len] == chr)
		return ((char *)(str + len));
	while (len > 0)
	{
		if (str[len - 1] == chr)
			return ((char *)(str + (len - 1)));
		len--;
	}
	return (0);
}

/* int main(int argn, char **argv)
{
	char	*str = argv[1];
	char	character = argv[2][0];
	
    if (argn > 2)
	{
		printf("argumentos -> str '%s' , character '%c' \n"
			, str, character);
		printf("ft_strrchr -> return %s \n", ft_strrchr(str, character));
	}  
    return (0);
} */
