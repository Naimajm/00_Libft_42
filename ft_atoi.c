/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:42:24 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/05 11:24:52 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte una cadena str en un valor entero. 
Omite los espacios en blanco iniciales, 
maneja un signo opcional y convierte los caracteres 
restantes en un número entero. 
Comprueba si existen condiciones de desbordamiento y desbordamiento insuficiente 
y devuelve el número entero convertido. */

/* La cadena pasada como parámetro puede comenzar 
con un número arbitrario de espacios en blanco 
según lo determinado porisspace(3).
Después del número arbitrario de espacios en blanco, 
puede haber un único signo opcional '+' o '-'.
El resto de la cadena se convertirá a un int, deteniéndose en el primer carácter
que no sea un dígito válido en la base 10 ,
(dígitos válidos son del 0 al 9).
&& str[index] != '\0' */

int	ft_atoi(const char *str)
{
	int	index;
	int	result;
	int	sign_count;
	int	sign;

	index = 0;
	result = 0;
	sign_count = 0;
	sign = 1;
	while ((str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r')))
		index++;
	while ((str[index] == '+' || str[index] == '-'))
	{
		sign_count += 1;
		if (str[index] == '-' && sign_count <= 1)
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && sign_count <= 1)
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (sign * result);
}

/* int	main(void)
{
	printf("argumentos -> str '%s' \n", "945");
	printf("ft_atoi -> return %d \n", ft_atoi("945"));

	printf("argumentos -> str '%s' \n", "-945");
	printf("ft_atoi -> return %d \n", ft_atoi("-945"));

	printf("argumentos -> str '%s' \n", " -+945");
	printf("ft_atoi -> return %d \n", ft_atoi(" -+945"));

	printf("argumentos -> str '%s' \n", " -+945asd");
	printf("ft_atoi -> return %d \n", ft_atoi(" -+945asd"));

	printf("argumentos -> str '%s' \n", " -945");
	printf("ft_atoi -> return %d \n", ft_atoi(" -945"));

	printf("argumentos -> str '%s' \n", "1 50");
	printf("ft_atoi -> return %d \n", ft_atoi("1 50"));

	return (0);
} */
