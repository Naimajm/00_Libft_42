/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naima <naima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:58:23 by naima             #+#    #+#             */
/*   Updated: 2024/05/23 13:10:00 by naima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// rellena con ceros n bytes en string destino --------

/* declare a temporary pointer */
/* make the temporary pointer equal to *s converted to a char * */
/* loop on the temporary pointer while we didn't reach n characters */
/* in that loop, set the current byte equal to 0 */
void	*ft_bzero(void *dest, unsigned int len)
{
	unsigned char	*dest_ptr;
	unsigned int	index;

	dest_ptr = (unsigned char *)dest;
	index = 0;
	if (len != 0)
	{
		while (index < len)
		{
			dest_ptr[index] = 0;
			index++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <strings.h> */

/* int main(void)
{   
    char str[] = "HolaCaracola";
    size_t n = 3;
    size_t nNull = 0;

    printf("test 1 bzero %s \n", bzero(str, n));
    printf("test 1 ft_bzero %s \n", ft_bzero(str, n));

    printf("test 2 bzero %s \n", bzero(str, nNull));
    printf("test 2 ft_bzero %s \n", ft_bzero(str, nNull));

    return (0);
}*/