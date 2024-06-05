/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:52:46 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/04 11:24:09 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Comprueba si un carácter es un dígito. Considera caracteres en el 
rango de 48 a 57, que corresponde a valores ASCII para los dígitos del 0 al 9. 
Si el carácter ingresado está dentro de este rango, la función devuelve un 
valor distinto de cero; en caso contrario, devuelve 0. */

int	ft_isdigit(int digit)
{
	int	is_digit;

	is_digit = 0;
	if (digit >= '0' && digit <= '9')
		is_digit = 1;
	return (is_digit);
}

/* int    main(int argn, char **argv)
{
	if (argn > 1)
		printf("caracter '%c' : %d \n", argv[1][0], ft_isdigit(argv[1][0]));
    return (0);
} */
