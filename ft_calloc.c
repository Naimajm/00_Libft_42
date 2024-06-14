/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:44:08 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/14 17:19:59 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* MALLOC ->  malloc() asigna bytes de tamaño 
y devuelve un puntero al espacio asignado. La memoria no está inicializada.  
Si el tamaño es 0, entonces malloc() devuelve NULL 
o un valor de puntero único que luego se puede pasar exitosamente a 'free()'.
*/

/* La función free() libera el espacio de memoria señalado por ptr, 
que debe haber sido devuelto por una llamada anterior a 
malloc(), calloc() o realloc().  
De lo contrario, o si free(ptr) ya se ha llamado antes, 
se produce un comportamiento indefinido.   
Si ptr es NULL, no se realiza ninguna operación. */

/* La función calloc() asigna memoria para una matriz de 
elementos nmemb de tamaño bytes cada uno y devuelve un puntero 
a la memoria asignada.  La memoria está configurada en cero.   
Si nmemb o size es 0, entonces calloc() devuelve NULL o un valor único.
valor del puntero que luego se puede pasar exitosamente a free().  
Si la multiplicación de nmemb y tamaño daría como resultado un 
desbordamiento de enteros, entonces calloc() devuelve un error.  
Por el contrario, no se detectaría un desbordamiento de enteros 
en el siguiente llamada a malloc(), con el resultado de que un 
bloque de memoria de tamaño incorrecto ser asignado: malloc(nmemb * tamaño); */

/* calloc()funciona de la misma manera malloc(), pero la diferencia es que 
calloc()establece todos los bytes de memoria 0en lugar de permanecer 
como el galimatías que había en la memoria antes de que lo asignáramos. */

/* Asigna memoria para una matriz de elementos con un recuento específico 
y un tamaño n. Comprueba si hay desbordamiento, asigna memoria usando malloc 
y pone a cero la memoria antes de devolver el puntero a la memoria asignada. */

// PROCESO ----------------
/* declarar un puntero de carácter tmp 'unsigned char' */
/* usar malloc para asignar el recuento * tamaño en tmp */
/* recorre tmp y establece cada byte en 0 */
/* devuelve tmp */

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	index;

	index = 0;
	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	while (index < count * size)
	{
		ptr[index] = 0;
		index++;
	}
	return ((void *)ptr);
}

/* int	main(int argn, char **argv)
{
	unsigned int	count = argv[1][0] -'0';
	unsigned int	size = argv[2][0] -'0';
	
    if (argn > 2)
	{
		printf("argumentos -> count '%d' size '%d' \n", count, size);
		printf("ft_calloc -> return %s \n", (char *)ft_calloc(count, size));
	}  
    return (0);
} */
