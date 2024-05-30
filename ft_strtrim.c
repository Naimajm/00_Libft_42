/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:50:36 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/30 14:06:25 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Recorta los caracteres iniciales y finales de una cadena str1 
que coinciden con cualquier carácter del conjunto. 
Asigna memoria para la cadena recortada, copia los caracteres 
que no coinciden de str1 a la nueva cadena, agrega un terminador nulo
y devuelve el puntero de la cadena recortada. */

/* Recortar significa eliminar los caracteres especificados en la set 
cadena desde el principio Y el final de la cadena s1,
sin eliminar los caracteres setque están en el medio s1. */

// PROCESO
/* Si str1 no existe, devuelve una cadena vacía
usa ft_strchr para ver si el inicio en "str1" tiene caracteres incluidos en "set"
y localizamos el índice ("init") en "str1", donde empieza a tener caracteres que 
no están en "set"; 
haz lo mismo pero moviéndote desde el final de "str1" (indice "end")
para determinar la última posición a imprimir.
usa la función ft_substr para generar la nueva cadena que comienza 
en el índice "init" de "str1" y finaliza en el índice "end" de str1, 
ft_substr necesita la longitud total de la nueva cadena que es "end - init". */

char	*ft_strtrim(char const *str1, char const *set)
{
	unsigned char	*strtrim;
	unsigned int	init_index;
	unsigned int	end_index;

	init_index = 0;
	end_index = ft_strlen(str1);
	if (!str1)
		return (ft_strdup(""));
	while (ft_strchr(set, str1[init_index]))
		init_index++;
	while (end_index > 0 && ft_strchr(set, str1[end_index]))
		end_index--;
	strtrim = (unsigned char *)
		ft_substr(str1, init_index, (end_index - init_index + 1));
	return ((char *) strtrim);
}

/* int	main(void)
{
	printf("'1234', '12' // '34' --> %s \n", ft_strtrim("1234", "12"));

	printf("'xyaybyz', 'xyz' // 'ayb' --> %s \n", ft_strtrim("xyaybyz", "xyz"));

	printf("'1234', ''// '1234'--> %s \n", ft_strtrim("1234",""));	

	printf("'12', '1234' // '' --> %s \n", ft_strtrim("12","1234"));
		
	printf("'', '12' // '' --> %s \n", ft_strtrim("","12"));
	
	printf("'', '' // '' --> %s \n", ft_strtrim("",""));	

	return (0);
} */
