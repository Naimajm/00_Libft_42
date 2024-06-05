/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:32:57 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 10:50:15 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Establece cada byte del bloque de memoria al que apunta str en el valor c, 
hasta una longitud especificada n. Devuelve el puntero str después de modificar
el bloque de memoria. */

/* escribe 'len' bytes de valor 
'caracter' en la cadena 'dest' ------------------------------- */
/* declare a temporary unsigned char * */
/* make this temporary variable equals to void *b converted to unsigned char */
// asignacion string a dest -> casteo a 'unsigned char'
/* loop on the temporary variable while we didn't reach len */
/* in that loop, set the current byte equal to c converted to unsigned char */
/* return void *b */

void	*ft_memset(void *dest, int character, unsigned int len)
{
	unsigned char	*dest_ptr;
	unsigned int	index;

	dest_ptr = (unsigned char *)dest;
	index = 0;
	while (index < len)
	{
		dest_ptr[index] = (unsigned char)character;
		index++;
	}
	return (dest);
}

/* int	main(int argn, char **argv)
{
	char	*dest = argv[1];
	char	character = argv[2][0];
	int	len = argv[3][0] - '0';
	
    if (argn > 3)
	{
		printf("argumentos -> dest '%s' , character '%c' , len '%d' \n"
			, dest, character, len);
		printf("ft_memset -> return %s \n", 
            (char *)ft_memset(dest, character, len));
	}  
    return (0);
} */
