/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:03:18 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/03 21:55:25 by juagomez         ###   ########.fr       */
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

static int	ft_words_count(char const *str, char character);
static int	ft_word_len(char const *str, char character, int index);
static char	**ft_free_array(char **array);
static char	**ft_split_words(char const *str, char c, char **ar, int w_num);

char	**ft_split(char const *str, char character)
{
	unsigned int	words_numbers;
	unsigned char	**array;

	words_numbers = 0;
	if (!str)
		return (NULL);
	words_numbers = ft_words_count(str, character);
	array = (unsigned char **)malloc(sizeof(char *) * (words_numbers + 1));
	if (!array)
		return (NULL);
	array = (unsigned char **)ft_split_words
		(str, character, (char **)array, words_numbers);
	if (!array)
	{
		array = (unsigned char **)ft_free_array((char **)array);
		return (NULL);
	}
	return ((char **)array);
}

// FUNCION DIVIDIR Y ASIGNAR
/**
 * @brief dividir en piezas la cadena "str" dividida por el carácter "character"
 * y copie cada pieza a una posición "array" consecutiva. 
 * @param str String para dividir en pedazos. 
 * Si "str" no existe -> fallo de segmentación!!.
 * @param character el carácter separador
 * @param array se asignó una matriz doble vacía cada pieza de "str".
 * si "str" no existe -> fallo de segmentación!!.
 * @param words_numbers la longitud de array.
 * @return char** una matriz doble con un "pieza of str" en cada posición.
 */
static char	**ft_split_words(char const *str, char c, char **arr, int w_num)
{
	int	str_index;
	int	word_index;
	int	word_len;

	str_index = 0;
	word_index = 0;
	while (word_index < w_num)
	{
		while (str[str_index] != '\0' && str[str_index] == c)
			str_index++;
		word_len = ft_word_len(str, c, str_index);
		arr[word_index] = ft_substr(str, str_index, word_len);
		if (!arr[word_index])
		{
			arr = ft_free_array((char **)arr);
			return (NULL);
		}
		str_index = str_index + word_len;
		word_len = 0;
		word_index++;
	}
	arr[word_index] = '\0';
	return ((char **)arr);
}

/* LIBERAR RESERVA MEMORIA DE ARRAY DE STRINGS */
/* En este bucle, recorremos cada elemento de la matriz de palabras 
y lo liberamos */
/* Cuando liberamos cada elemento, podemos liberar matriz de palabras */
static char	**ft_free_array(char **array)
{
	int	index;

	index = 0;
	if (array)
	{
		while (array[index])
		{
			free(array[index]);
			index++;
		}
		free(array);
	}
	return (array);
}

// CALCULA LONGITUD POR PALABRA
static int	ft_word_len(char const *str, char character, int index)
{
	int	word_len;

	word_len = 0;
	while (str[index] != '\0' && str[index] != character)
	{
		index++;
		word_len++;
	}
	return (word_len);
}

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
static int	ft_words_count(char const *str, char character)
{
	int	index;
	int	count;
	int	word_flag;

	index = 0;
	count = 0;
	word_flag = 0;
	while (str[index] != '\0')
	{
		if (str[index] != character && word_flag == 0)
		{
			word_flag = 1;
			count++;
		}
		else if (str[index] == character)
			word_flag = 0;
		index++;
	}
	return (count);
}

// FUNCION DIVIDIR Y ASIGNAR
/* Crea nuevo string con reserva de memeoria segun longitud palabra 
y la rellena. Copia la palabra desde str entre indices 'start y end' */
/* Retorna string -> se almacenará en nuestra matriz de palabras */
/* static char	*fill_word(char const *str, int start, int end)
{
	int	index;
	char	*word;

	index = 0;
	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	while ( index < end)
	{
		word[index] = str[start + index];
		index++;
	}
	word[index] = '\0';
	return (word);
} */

/* int	main(void)
{
	printf("contador palabras string '3': %d \n", 
		ft_words_count("HOLA-CAT-BC", '-'));
	printf("contador palabras string '3': %d \n", 
		ft_words_count("-  HOLA-CAT-BC", '-'));
	printf("contador palabras string '3': %d \n", 
		ft_words_count("---HOLA-CAT-BC--", '-'));

	printf("longitud palabras: %d \n", ft_word_len("HOLA-CAT-BC", '-', 0));

	// TEST FUNCION FT_SPLIT
	int index = 0;
	char	**array = ft_split("HOLA-CAT-BC", '-');
	while (array[index])
	{
		printf("array palabras: %s \n", array[index]);
		index++;
	}
	// LIMPIEZA MEMORIA ARRAY TEST
	array = ft_free_array(array);
	if (array)
        printf("\n -ARRAY NO ES NULO- \n");
	return (0);
} */