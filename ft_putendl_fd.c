/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:17:40 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/01 23:02:17 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Escribe la cadena s en el descriptor de archivo especificado fd, seguida 
de un carácter de nueva línea. 
Primero verifica si la cadena s no es nula y luego usa la llamada al sistema de 
escritura para escribir la cadena completa en el descriptor de archivo. 
La longitud de la cadena se obtiene usando la función "str_len". Después de 
escribir la cadena, escribe un carácter de nueva línea ('\n') en el descriptor 
del archivo para pasar a la siguiente línea. */

/* La función supone que la operación de escritura será exitosa 
y no incluye manejo explícito de errores. */

void	ft_putendl_fd(char *str, int fd)
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
		write(fd, "\n", 1);
	}
}

/* int	main(void)
{
	int	fd = open("text.txt", O_RDWR);
	ft_putendl_fd("Ey Mundo", fd);
	close(fd);
	return (0);
} */