/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:42:24 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/28 16:39:53 by juagomez         ###   ########.fr       */
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
	char *str1 = "945";
	int	integer1;

	char *str2 = "-945";
	int	integer2;

	char *str3 = " -+945";
	int	integer3;

	char *str4 = " -+945asd";
	int	integer4;
	
	char *str5 = " -945";
	int	integer5;
	
	char *str6 = "1 50";
	int	integer6;

	integer1 = atoi(str1);
	printf("atoi %d \n", integer1);
	integer1 = ft_atoi(str1);
	printf("ft_atoi %d \n", integer1);

	integer2 = atoi(str2);
	printf("atoi %d \n", integer2);
	integer2 = ft_atoi(str2);
	printf("ft_atoi %d \n", integer2);

	integer3 = atoi(str3);
	printf("atoi %d \n", integer3);
	integer3 = ft_atoi(str3);
	printf("ft_atoi %d \n", integer3);

	integer4 = atoi(str4);
	printf("atoi %d \n", integer4);
	integer4 = ft_atoi(str4);
	printf("ft_atoi %d \n", integer4);

	integer5 = atoi(str5);
	printf("atoi %d \n", integer5);
	integer5 = ft_atoi(str5);
	printf("ft_atoi %d \n", integer5);

	integer6 = atoi(str6);
	printf("atoi %d \n", integer6);
	integer6 = ft_atoi(str6);
	printf("ft_atoi %d \n", integer6);

	return (0);
} */
