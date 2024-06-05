/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:16:00 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/04 11:17:30 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_isalpha
/* Comprueba si un carácter es un carácter alfabético. Considera tanto letras 
mayúsculas (valores ASCII 65 a 90) como letras minúsculas (valores 
ASCII 97 a 122) como caracteres alfabéticos. Si el carácter de entrada se 
encuentra dentro de cualquiera de estos rangos, la función devuelve el valor 
con un valor distinto de cero; en caso contrario, devuelve 0. */

int	ft_isalpha(int charac)
{
	int	is_alpha;

	is_alpha = 0;
	if ((charac >= 'A' && charac <= 'Z') || (charac >= 'a' && charac <= 'z'))
		is_alpha = 1;
	return (is_alpha);
}

/* int    main(int argn, char **argv)
{
	if (argn > 1)
		printf("caracter alfa '%c': %d \n", argv[1][0], ft_isalpha(argv[1][0]));
    return (0);
} */
