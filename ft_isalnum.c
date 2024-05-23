/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:52:48 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/23 19:07:59 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int caract)
{
	unsigned int	is_alpha;
	unsigned int	is_digit;
	unsigned int	is_alnum;

	is_alpha = 0;
	is_digit = 0;
	is_alnum = 0;
	if (caract >= '0' && caract <= '9')
		is_digit = 1;
	if ((caract >= 'A' && caract <= 'Z') || (caract >= 'a' && caract <= 'z'))
		is_alpha = 1;
	if (is_alpha == 1 || is_digit == 1)
		is_alnum = 1;
	else
		is_alnum = 0;
	return (is_alnum);
}

/* static void ft_putchar(char caracter)
{
    write(1, &caracter, 1);
}

int main(void)
{   
    int caracter1;
    int caracter2;
    int caracter3;

    caracter1 = '1';
    caracter2 = 'a';
    caracter3 = '_';

    ft_putchar(isalnum(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(isalnum(caracter2) + '0');
    ft_putchar('\n');
    ft_putchar(isalnum(caracter3) + '0');
    ft_putchar('\n');

    ft_putchar(ft_isalnum(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isalnum(caracter2) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isalnum(caracter3) + '0');
    ft_putchar('\n');    
    
    return 0;
} */