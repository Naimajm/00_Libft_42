/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:52:48 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/04 11:29:52 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Comprueba si un carácter es alfanumérico. Considera letras mayúsculas 
(valores ASCII 65 a 90), letras minúsculas (valores ASCII 97 a 122) y 
dígitos (valores ASCII 48 a 57) como caracteres alfanuméricos. Si el carácter 
de entrada se encuentra dentro de cualquiera de estos rangos, la función 
devuelve un valor distinto de cero; en caso contrario, devuelve 0. */

int	ft_isalnum(int c)
{
	int	is_alnum;

	is_alnum = 0;
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		is_alnum = 1;
	return (is_alnum);
}

/* int	main(int argn, char **argv)
{	
	if (argn > 1)
		printf("caracter '%c' : %d \n", argv[1][0], ft_isalnum(argv[1][0]));

	printf("caracter ascii '-': %d \n", ft_isalnum('-'));
    printf("caracter ascii 'A': %d \n", ft_isalnum('A'));
	return (0);
} */