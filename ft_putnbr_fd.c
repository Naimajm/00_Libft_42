/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 23:04:19 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/02 10:49:16 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Toma un número entero 'n' y un descriptor de archivo entero 'fd' como 
entradas. Luego convierte el número entero 'n' en su representación de cadena 
utilizando el sistema numérico base 10 y escribe esta cadena en el descriptor 
de archivo especificado 'fd'. La conversión se realiza utilizando los caracteres 
de la cadena "base", que contiene los dígitos del '0' al '9'. Esta función se 
utiliza para imprimir números enteros en un descriptor de archivo específico. */

// PROCESO
// -> Verificacion entero min negativo en tipo dato int '-2147483648'. 
/* -> si el número es menor que 0, tenemos que escribir un '-'seguido del 
número, por lo que escribimos el '-', luego multiplicamos el número por -1 para
 hacerlo positivo y llamamos a la función ft_putnbr_fd con el número positivo */
/* ->  aquí el número será positivo
*lo primero que tenemos que hacer es transformar el número en cada uno de sus 
dígitos. Eso lo hacemos llamando a la función nuevamente con el número / 10, 
que quita un dígito del final de ello ya que es una división entera. Una vez 
que hayamos hecho eso, podemos llamar a la función con el numero %10 para 
obtener el resto de la división itneger, de esa forma obtenemos cada dígito.
Si el número que enviamos a la función es aún mayor que cero, hacemos lo mismo, 
llamamos a la función con el número dividido por 10, luego nuevamente con el 
número módulo 10 */
/* ->  si llegamos aquí, esto significa que n es sólo un dígito (num < 9)
cuando n es solo un dígito, podemos convertirlo a su carácter correspondiente 
en la tabla ASCII. En cuanto a las demás funciones, configuramos l primer
parámetro de la función de escritura en fd */

// NOTA -> SE PUEDE USAR TIPO DATO LONG PARA EVITAR EL CASO "-2147483648".  

void	ft_putnbr_fd(int num, int fd)
{
	if (num == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
		ft_putnbr_fd(num, fd);
	}
	else if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
	{
		ft_putchar_fd(num + '0', fd);
	}
}

/* int	main(void)
{
	int fd = open("text.txt", O_RDWR);

	//ft_putnbr_fd(-2147483648, fd);

	ft_putnbr_fd(-452, fd);

	//ft_putnbr_fd(452, fd);

	///ft_putnbr_fd(0, fd);

	close(fd);
	return (0);
} */