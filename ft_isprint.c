/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:10 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/04 11:19:13 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Determina si un carácter determinado es un carácter imprimible según la tabla
 ASCII. Considera caracteres imprimibles en el rango de 32 (-) a 126(~), 
inclusive. Si el carácter de entrada se encuentra dentro de este rango, la 
función devuelve un valor distinto de cero; en caso contrario, devuelve 0. */

int	ft_isprint(int caracter)
{
	int	is_print;

	is_print = 0;
	if (caracter >= ' ' && caracter <= '~')
		is_print = 1;
	return (is_print);
}

/* int main(int argn, char **argv)
{
    if (argn > 1)
        printf("caracter '%c' : %d \n", argv[1][0], ft_isprint(argv[1][0]));

    printf("caracter imprimible '~' : %d \n", ft_isprint('-'));
    printf("caracter imprimible '127' : %d \n", ft_isprint(127));
    return (0);
} */