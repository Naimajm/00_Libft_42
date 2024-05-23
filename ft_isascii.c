/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naima <naima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:20:14 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/23 13:51:43 by naima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # include <unistd.h>

/* void    ft_putchar(char caracter)
{
    write(1, &caracter, 1);
} */

/* retorna distinto 0 si caracter tiene 
valor octal entre 0 y 177 (decimal 000 y 127) ---- */
// tabla valores ascii de control + imprimibles
int	ft_isascii(int caracter)
{
	unsigned int	is_ascii;

	is_ascii = 0;
	if (caracter >= 0 && caracter <= 127)
		is_ascii = 1;
	return (is_ascii);
}
// #include <ctype.h>

// no consigo testear con caracter 'ñ'
/* int main(void)
{
    int caracter1;
    int caracter2;

    caracter1 = '_';
    caracter2 = 164;

    ft_putchar(isascii(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(isascii(caracter2) + '0');
    ft_putchar('\n');

    ft_putchar(ft_isascii(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isascii(caracter2) + '0');
    ft_putchar('\n');

    return (0);
} */