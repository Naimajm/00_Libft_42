/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 10:55:45 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/02 20:03:18 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte un número entero n en una representación de cadena. Determina la 
longitud del número, asigna memoria para la cadena y convierte cada dígito del 
número en un carácter mediante operaciones de división y módulo. Se devuelve 
la cadena resultante, con un signo negativo agregado si es necesario. */

// PROCESO
/* Convierto el int num recibido como parámetro a un long .Esto solo se hace 
para que INT_MIN e INT_MAX no sean un problema y puedo tratarlos exactamente 
de la misma manera que todos los demás números -> NO. tratamiento especifico */
/* Obteniendo la longitud del número .> funcion auxilar */
/* Malloc + '\0' asignando la cadena con tamaño correcto y de la 
configuración str[len] = '0'*/
/* si el número es menor que 0,establecemos el número igual a menos sí mismo.*/
/* Conversión de int a carácter */

static int	ft_int_len(int num);
static char	*ft_itoa_int_min(void);

char	*ft_itoa(int num)
{
	unsigned int	len;
	unsigned char	*result;

	if (num == -2147483648)
		return (ft_itoa_int_min());
	len = ft_int_len(num);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	if (num < 0)
	{
		result[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		result[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return ((char *)result);
}

// FUNCION AUXILIAR -> RETORNA LONGITUD DE CARACTERES DE NUMERO ENTERO
static int	ft_int_len(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num = num * -1;
		count++;
	}
	if (num == 0)
		count++;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static char	*ft_itoa_int_min(void)
{
	char	*result;

	result = (char *)malloc(12);
	if (!result)
		return (NULL);
	result[0] = '-';
	result[1] = '2';
	result[2] = '1';
	result[3] = '4';
	result[4] = '7';
	result[5] = '4';
	result[6] = '8';
	result[7] = '3';
	result[8] = '6';
	result[9] = '4';
	result[10] = '8';
	result[11] = '\0';
	return (result);
}

/* int	main(void)
{	
	printf("numero digitos del numero '-2147483648': %d  \n", 
		ft_int_len(-2147483648));
	printf("test funcion ft_itoa_int_min '-2147483648': %s  \n", 
		ft_itoa_int_min());

	printf("numero digitos del numero '-4543': %d  \n", ft_int_len(-4543));

	printf("string del numero '-2147483648': %s \n", ft_itoa(-2147483648));

	printf("string del numero '-4543': %s \n", ft_itoa(-4543));

	printf("string del numero '0': %s \n", ft_itoa(0));

	printf("string del numero '9': %s \n", ft_itoa(9));

	printf("string del numero '4543': %s \n", ft_itoa(4543));
	return (0);
} */
