/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:01:26 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/01 22:21:17 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Escribe la cadena s en el descriptor de archivo especificado fd. Primero 
verifica si la cadena s no es nula y luego usa la llamada al sistema de 
escritura para escribir la cadena completa en el descriptor de archivo. 
El número de bytes a escribir se calcula mediante el uso de una función 
auxiliar "str_len", ya que cada carácter requiere exactamente un byte. */

/* La función supone que la operación de escritura será exitosa y no 
incluye manejo explícito de errores. Es importante asegurarse de que el 
descriptor del archivo sea válido y esté abierto para escritura antes 
de llamar a esta función para evitar comportamientos inesperados o errores*/

void	ft_putstr_fd(char *str, int fd)
{
	int	index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
		{
			write(fd, &str[index], 1);
			index++;
		}
	}
}

/* int	main(void)
{
	int fd = open("text.txt", O_RDWR);
	ft_putstr_fd("Hola Mundo", fd);
	close(fd);
	return (0);
} */