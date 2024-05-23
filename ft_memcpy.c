/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:27:43 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/23 19:03:24 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copia n bytes desde 'scr' a 'dest' . superposicion
/* declare a temporary pointer for dst + src */
/* if src and dst are NULL, return dst */
/* make dst tmp pointer equal to dst converted to unsigned char * */
/* loop over the dst tmp pointer while we didn't reach n */
/* set the current byte of dst tmp pointer equal 
to current byte of src tmp pointer */
void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	unsigned int	indice;

	if (src == NULL && dest == NULL)
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	indice = 0;
	while (indice < n)
	{
		dest_ptr[indice] = src_ptr[indice];
		indice++;
	}
	return (dest_ptr);
}

/* int main(void)
{
    char    strSrc[] = "HolaCaracola";
    char    strDest[] = "Adios";

    char    strNullSrc[] = " ";
    char    strNullDest[] = " ";
    unsigned int n = 4;   

    printf("test 1 memcpy %s \n", memcpy(strDest, strSrc, n)); 
    printf("test 1 ft_memcpy %s \n", ft_memcpy(strDest, strSrc, n));

    //printf("test 1 memcpy %s \n", memcpy(strNullDest, strNullSrc, n)); 
    //printf("test 1 ft_memcpy %s \n", ft_memcpy(strNullDest, strNullSrc, n));

    return (0);
} */
