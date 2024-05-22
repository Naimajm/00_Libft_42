/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:53:10 by juagomez          #+#    #+#             */
/*   Updated: 2024/04/23 14:04:46 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

/* static  void    ft_putchar(char caracter)
{
    write(1, &caracter, 1);
}*/

// retorna distinto 0 si caracter ascii es imprimible (32-126) (espacio - ~)
int	ft_isprint(int caracter)
{
	int	is_print;

	is_print = 0;
	if (caracter >= ' ' && caracter <= '~')
	{
		is_print = 1;
	}
	return (is_print);
}

// #include <ctype.h>

/* int main(void)
{
    int caracter1;
    int caracter2;

    caracter1 = 'NULL';
    caracter2 = 'A';

    ft_putchar(isprint(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(isprint(caracter2) + '0');
    ft_putchar('\n');

    ft_putchar(ft_isprint(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isprint(caracter2) + '0');
    ft_putchar('\n');

    return (0);
} */