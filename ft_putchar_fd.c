/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 22:09:55 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/01 21:57:19 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La función está diseñada para escribir un solo carácter en un descriptor 
de archivo específico. Utiliza la llamada al sistema de escritura para enviar 
el carácter al descriptor de archivo especificado y no devuelve ningún valor. */

/* Si se proporciona un descriptor de archivo incorrecto o no válido, el 
comportamiento no está definido. Puede provocar un error o una salida 
inesperada. 
Es esencial asegurarse de que el descriptor del archivo sea válido 
y esté abierto antes de usarlo con ft_putchar_fd. */

/* 1º parametro 'write' -> es el descriptor del archivo
- 2º parametro 'write' -> la dirección del caracter 
- 3º parametro 'write' -> 1 // se debe escribir un carácter */

void	ft_putchar_fd(char character, int fd)
{
	write (fd, &character, 1);
}
/* int	main(int argn, char **argv)
{
	if (argn == 2)
	{
		printf("argv0 : %s , argv1 : %s", argv[0], argv[1]);

		int fd = open(argv[1], O_WRONLY);
		ft_putchar_fd('J', fd);
		close(fd);
	}
	return (0);
} */

/* int	main(void)
{
	int	fd = open("text.txt", O_RDWR);	
	ft_putchar_fd('J', fd);
	close(fd);
	return (0);
} */