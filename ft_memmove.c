/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:51 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 11:09:02 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copia n bytes del área de memoria señalada por src al área de memoria 
señalada por destino. Maneja correctamente las regiones de memoria superpuestas
mediante el uso de un búfer temporal. Devuelve un puntero al área de memoria 
de destino. */

// https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_memmove
	/* declarar 2 punteros temporales para src y dst */
	/* declarar un contador */
	/* comprobamos si tanto src como dst son NULL */
	/* hacer que el puntero dst tmp sea igual a dst convertido a char * */
	/* hacer que el puntero src tmp sea igual a src convertido a char * */
	/* si src y dst se superponen */
	/* realiza un bucle mientras num es mayor que 0 y copia src en dst */
	/* si src y dst no se superponen */
	/* realiza un bucle mientras nuestro contador 
	es menor que len y copia src en dst */
	/* devuelve dest_ptr */

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

/* int	main(int argn, char **argv)
{
	char	*dest = argv[1];
	char	*src = argv[2];
	int	num = argv[3][0] - '0';
	
    if (argn > 3)
	{
		printf("argumentos -> dest '%s' , src '%s' , num '%d' \n"
			, dest, src, num);
		printf("ft_memmove -> return %s \n", 
            (char *) ft_memmove(dest, src, num));
	}  
    return (0);
} */