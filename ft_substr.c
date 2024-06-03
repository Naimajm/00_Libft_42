/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:56:34 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/30 21:24:25 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Primero tenemos que comprobar si el start índice es mayor que la longitud 
de la cadena o no. También tenemos que comprobar si el startmás lenes mayor que 
la longitud de toda la cuerda. Luego asignamos suficiente memoria para la 
subcadena y la copiamos s[start] hasta llegar a lenlos caracteres copiados 
en nuestra nueva cadena. Y finalmente podemos devolver la subcadena. */

// PROCESO
/* comprobamos que la cadena que recibimos no sea nula si es el caso 
devolvemos NULL ya que no podremos tomar una subcadena de algo vacío */
/* si el índice inicial es mayor que la longitud del original cadena 
devolvemos una cadena vacía asignada que se puede liberar mas tarde  */
/* si el 'len' que tenemos que copiar es mayor que el largo de la cadena 
(strlen(str))
-comenzando en el inicio del índice, eso significa que tenemos que detenernos 
después de leer toda la cadena y que el tamaño asignado no tiene que ser igual 
al largo recibido como parámetro pero solo el tamaño 'size' + 1  para el carácter
que termina en NUL. Esto nos permite asignar sólo memoria que sea realmente 
necesaria  */
/* luego asignamos la memoria */
/* luego recorremos la cadena recibida como parámetro del índice 
'start' + index y copiar cada carácter en nuestro nuevo índice de cadena i */
/* finalmente devolvemos la subcadena */

char	*ft_substr(const char *str, unsigned int start, unsigned int len)
{
	unsigned int	str_len;
	unsigned int	substr_index;
	unsigned char	*substr;

	str_len = ft_strlen(str);
	substr_index = 0;
	if (!str)
		return (NULL);
	if (start > str_len)
		return (ft_strdup(""));
	if ((start + len) > str_len)
		len = str_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (substr_index < len)
	{
		substr[substr_index] = str[start + substr_index];
		substr_index++;
	}
	substr[substr_index] = '\0';
	return ((char *)substr);
}

/* int	main(void)
{
	char *str1 = "Hola Mundo";
	unsigned int start1 = 2;
	unsigned int len1 = 4;
	
	printf("%s \n", ft_substr(str1, start1, len1));

	// start >= ft_strlen(str)
	char *str2 = "Hola";
	unsigned int start2 = 10;
	unsigned int len2 = 4;

	printf("%s \n", ft_substr(str2, start2, len2));

	// len > ft_strlen(str) 
	char *str3 = "Hola";
	unsigned int start3 = 2;
	unsigned int len3 = 4;

	printf("%s \n", ft_substr(str3, start3, len3));
	
	return (0);
}  */