/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:51 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/24 14:52:30 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_memmove
	/* declarar 2 punteros temporales para src y dst */
	/* declarar un contador */
	/* comprobamos si tanto src como dst son NULL */
	/* hacer que el puntero dst tmp sea igual a dst convertido a char * */
	/* hacer que el puntero src tmp sea igual a src convertido a char * */
	/* si src y dst se superponen */
	/* realiza un bucle mientras len es mayor que 0 y copia src en dst */
	/* si src y dst no se superponen */
	/* realiza un bucle mientras nuestro contador es menor que len y copia src en dst */
	/* devuelve horario de verano */
//  copia un bloque de memoria desde el origen al destino, manejando regiones de memoria superpuestas.
void	*ft_memmove(void *dest, const void *src, unsigned int num)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if ((src == NULL && dest == NULL) || (dest == src))
		return (dest);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest > src)
		while (num-- > 0)
			dest_ptr[num] = src_ptr[num];
	else
		ft_memcpy(dest, src, num);
	return (dest_ptr);
}

/* int	main(void)
{
	char	origen[] = "Hola";
	char	destino[6];
	unsigned int num = 3;	

	printf("%s", memmove(destino, origen, num));
	printf("%s", ft_memmove(destino, origen, num));
	return (0);
} */