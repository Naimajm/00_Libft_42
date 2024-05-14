/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:52:48 by juagomez          #+#    #+#             */
/*   Updated: 2024/04/23 12:18:46 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void ft_putchar(char caracter)
{
    write(1, &caracter, 1);
}

static int  ft_isdigit(int caracter)
{
    unsigned int   is_digit;

    is_digit = 0;
    if (caracter >= '0' && caracter <= '9')
    {
        is_digit = 1;
    }
    return (is_digit);
}

static  int ft_isalpha(int caracter)
{
    unsigned int    is_alpha;

    is_alpha = 0;
    if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z'))
    {
        is_alpha = 1;
    }
    return (is_alpha);
}


int ft_isalnum(int caracter)
{
    unsigned int    is_alpha;
    unsigned int    is_digit;
    unsigned int    is_alnum;

    is_alpha = ft_isalpha(caracter);
    is_digit = ft_isdigit(caracter);

    if(is_alpha == 1 || is_digit == 1)
        is_alnum = 1;
    else
        is_alnum = 0;

    return (is_alnum);
}

#include <ctype.h>

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
}