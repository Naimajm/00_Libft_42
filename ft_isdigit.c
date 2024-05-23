/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naima <naima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:52:46 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/23 13:25:16 by naima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <unistd.h>

/*static  void    ft_putchar(char caracter)
{
    write(1, &caracter, 1);
}*/

// retorna 0 si valor char es digito (0-9)
int	ft_isdigit(int digit)
{
	unsigned int	is_digit;

	is_digit = 0;
	if (digit >= '0' && digit <= '9')
	{
		is_digit = 1;
	}
	return (is_digit);
}

//#include <ctype.h>

/*int main(void)
{
    int digit1;
    int digit2;

    digit1 = 1;
    digit2 = '1';

    ft_putchar(ft_isdigit(digit1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isdigit(digit2) + '0');
    ft_putchar('\n');

    ft_putchar(ft_isdigit(digit1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isdigit(digit2) + '0');
    ft_putchar('\n');

    return 0;
}*/
