/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:54:15 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/14 12:39:05 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Establece los primeros n bytes de la memoria señalada por dest en cero. Itera a 
través del bloque de memoria disminuyendo n, y para cada iteración, asigna el 
valor 0 al byte actual señalado por dest. */

// rellena con ceros n bytes en string destino --------
/* declare a temporary pointer */
/* make the temporary pointer equal to *s converted to a char * */
/* loop on the temporary pointer while we didn't reach n characters */
/* in that loop, set the current byte equal to 0 */

void	*ft_bzero(void *dest, size_t len)
{
	char	*dest_ptr;
	size_t	index;

	dest_ptr = (char *)dest;
	index = 0;
	if (len != 0)
	{
		while (index < len)
		{
			dest_ptr[index] = 0;
			index++;
		}
	}
	return ((void *)dest);
}

/* int	main(int argn, char **argv)
{
	char	*dest = argv[1];
	int	len = argv[2][0] - '0';
	
    if (argn > 2)
	{
		printf("argumentos -> dest '%s' , len '%d' \n"
			, dest, len);
		printf("ft_bzero -> return %s \n", 
            (char *) ft_bzero(dest, len));
	}  
    return (0);
} */