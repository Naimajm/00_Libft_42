/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:07:14 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/27 13:27:27 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// retorna longitud del string
int	ft_strlen(const char *string)
{
	int	contador;

	contador = 0;
	while (string[contador] != '\0')
		contador++;
	return (contador);
}

/* void    ft_putchar(char caracter)
{
    write(1, &caracter, 1);
} */

/* int main(void)
{
    char    string1[10] = "HolaCla";
    char    string2[8] = "Hola";

    ft_putchar(strlen(string1) + '0');
    ft_putchar('\n');
    ft_putchar(strlen(string2) + '0');
    ft_putchar('\n');

    ft_putchar(ft_strlen(string1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_strlen(string2) + '0');
    ft_putchar('\n');

    return (0);
} */
