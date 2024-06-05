/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:20:14 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/04 11:21:23 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Comprueba si un carácter está dentro del rango ASCII. Verifica si el 
carácter tiene un valor ASCII entre 0 y 127 (ascii de control + imprimibles), 
inclusive. Si el carácter de entrada se encuentra dentro de este rango, la 
función devuelve un valor distinto de cero; en caso contrario, devuelve 0. */

int	ft_isascii(int caracter)
{
	int	is_ascii;

	is_ascii = 0;
	if (caracter >= 0 && caracter <= 127)
		is_ascii = 1;
	return (is_ascii);
}

/* int main(int argn, char **argv)
{
    if (argn > 1)
        printf("caracter '%c' : %d \n", argv[1][0], ft_isascii(argv[1][0]));

    printf("caracter ascii '-': %d \n", ft_isascii('-'));
    printf("caracter ascii '164': %d \n", ft_isascii(164));
    return (0);
} */