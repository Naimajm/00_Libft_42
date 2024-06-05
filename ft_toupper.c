/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:17:04 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 10:39:53 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte un carácter alfabético en minúscula a su equivalente en mayúscula
restando 32 de su valor ASCII. Devuelve el carácter en mayúscula resultante
o el carácter original si no es un carácter alfabético en minúscula. */

int	ft_toupper(int character)
{
	if (character >= 'a' && character <= 'z')
		return (character - 32);
	return (character);
}

/* int    main(int argn, char **argv)
{
	if (argn > 1)
		printf("caracter '%c': %c \n", argv[1][0], ft_toupper(argv[1][0]));
    return (0);
} */
