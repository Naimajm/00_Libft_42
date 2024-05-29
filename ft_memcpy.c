/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:27:43 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/25 12:48:04 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copia un máximo de n bytes de src a dst. 
Puede existir superposición de memoria.
Esta función funciona como 'strcpy', excepto que 'memcpy' acepta 'void *' 
como parámetros, por lo que podemos darle cualquier 
tipo de puntero que queramos copiar. */

/* declarar un puntero temporal para dst + src */
/* si src y dst son NULL, devuelve dst */
/* hacer que el puntero dst tmp sea igual a dst 
convertido a unsigned char * */
/* recorremos el puntero dst tmp mientras no llegamos a n */
/* establece el byte actual del puntero dst tmp igual 
al byte actual del puntero src tmp */

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
