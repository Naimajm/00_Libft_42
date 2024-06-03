/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:03:18 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/03 10:01:42 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Divide la cadena str en una matriz de cadenas (array strings) según el 
carácter delimitador c. 
Cuenta el número de palabras en la cadena, asigna memoria para la matriz de 
cadenas y luego divide la cadena en palabras individuales, creando una matriz 
de cadenas. Se devuelve la matriz de cadenas resultante. */

/* Tomamos la cadena str y la dividimos para obtener una matriz que contiene 
cada una de sus palabras. Cada palabra está separada por una o más c, ese es 
nuestro delimitador de palabras. */

/* Nuestra matriz de palabras debe terminar en NUL. Eso significa que tenemos 
que asignar un elemento más en nuestra matriz, que podemos establecer en 0. 
Al hacer esto, tenemos una manera fácil de recorrer nuestra matriz de palabras, 
igual que para una cadena: while(words[i] != 0). */

// PROCESO
/* -> FUNCION CONTAR PALABRAS -> cuántas palabras hay en la cadena, según el 
delimitador */ 
/* -> CREAR ARRAY MATRICES -> suficientemente grande como para contener
todas las palabras + 1 que podemos establecer en 0*/
/* -> FUNCION DIVIDIR Y ASIGNAR ->  Asigne una cadena para cada palabra en 
nuestra matriz de palabras y copie las palabras en ella */
/* FUNCION LIBERAR MEMORIA ->  Liberar todo si tenemos un error de asignación 
de memoria. Cada elemento de la matriz así como la matriz  */

static int	ft_word_count(char *str, char character);
static int	ft_word_len(char const *str, char character, int index);
/* static char	*fill_word();
static char	*ft_free(); */

/* char	**ft_split(char const *str, char character)
{

	return (0);
} */

/* FUNCION CONTAR PALABRAS -> x es un disparador, comenzamos a contar la 
palabra sólo si es igual a 0. Esto nos permitirá omitir todos los separadores, 
ya que si bien es un separador la variable x seguirá siendo 0 para que quede 
más claro, recorremos toda la cadena, cuando encontramos un 
caracter que no es un separador y nuestro disparador es 0, agregamos una a 
nuestro recuento de palabras y configuramos nuestro disparador en 1.
para que así sea, no contar otra palabra hasta que encontremos otro separador.
Cuando encontramos un separador, configuramos nuestro disparador en 0 nuevamente
para que podemos contar otra palabra si hay una, el disparador nos ayuda 
a cuidar los string que están solo compuesto por separador */
static int	ft_word_count(char *str, char character)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	if (str[0] != character && str[0] != '\0')
		count++;
	while (str[index] != '\0')
	{
		if (str[index] == character && str[index + 1] != '\0' && str[index + 1] != character)
			count++;
		index++;
	}
	return (count);
}

// CALCULA LONGITUD POR PALABRA
static int	ft_word_len(char const *str, char character, int index)
{
	int word_len;

	word_len = 0;
	while (str[index] != '\0' && str[index] != character)
	{
		word_len++;
		index++;
	}
	return(word_len);	
}


// FUNCION DIVIDIR Y ASIGNAR
/* static char	*fill_word()
{
	return (0);
}

static char	*ft_free()
{
	return (0);
} */

int	main(void)
{
	printf("contador palabras string '3': %d \n", ft_word_count("HOLA-CAT-BC", '-'));
	printf("contador palabras string '3': %d \n", ft_word_count("-  HOLA-CAT-BC", '-'));
	printf("contador palabras string '3': %d \n", ft_word_count("---HOLA-CAT-BC--", '-'));

	printf("longitud palabras: %d \n", ft_word_len("HOLA-CAT-BC", '-', 0));
	printf("longitud palabras: %d \n", ft_word_len("-  HOLA-CAT-BC", '-', 1));
	printf("longitud palabras: %d \n", ft_word_len("---HOLA-CAT-BC--", '-', 3));

	return (0);
}