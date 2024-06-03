/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:24:19 by juagomez          #+#    #+#             */
/*   Updated: 2024/06/03 22:21:28 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// LIBRERIAS EXTERNAS -----------------------------------
// ----------------------------------------------------
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
/* fcntl - manipula el descriptor de fichero fd. La operación en cuestión se 
determina mediante cmd.  Define las siguientes requests y argumentos para su uso 
por las funciones fcntl() y open() */
# include <fcntl.h>

// ESTRUCTURAS DATOS -----------------------------------
// ----------------------------------------------------

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
	
}				t_list;


// FUNCIONES CHECKS-COUNTERS-UTILITIES  -----------------------------------
// ----------------------------------------------------

int	ft_isalpha(int caracter);

// retorna 0 si valor char es digito (0-9)
int	ft_isdigit(int digit);

int	ft_isalnum(int caracter);

/* retorna distinto 0 si caracter tiene valor octal entre 0 y 177 
(decimal 000 y 127) */
// tabla valores ascii de control + imprimibles
int	ft_isascii(int caracter);

// retorna distinto 0 si caracter ascii es imprimible (32-126) (espacio - ~)
int	ft_isprint(int caracter);

// FUNCIONES MEMORY-  -----------------------------------
// ---------------------------------------------------

// rellena con ceros n bytes en string destino
void	*ft_bzero(void *dest, unsigned int len);

// escribe 'len' bytes de valor 'caracter' en la cadena 'dest'
void	*ft_memset(void *dest, int caracter, unsigned int len);

/** 
* @brief Copia n bytes desde 'scr' a 'dest' . 
Puede haber superposicion de memoria.
* @param dest: puntero al bloque de memoria de destino.
* @param src: puntero al bloque de memoria de origen.
* @param num: número de bytes a copiar.
* @returns -> puntero al bloque de memoria de destino.
*/
void	*ft_memcpy(void *dest, const void *src, unsigned int n);

/** 
* @brief Copia un bloque de memoria desde el origen al destino, 
manejando regiones de memoria superpuestas.
* @param dest: puntero al bloque de memoria de destino.
* @param src: puntero al bloque de memoria de origen.
* @param num: número de bytes a copiar.
* @returns -> puntero al bloque de memoria de destino.
*/
void	*ft_memmove(void *dest, const void *src, unsigned int num);

/** 
* @brief Busca la primera aparición de un carácter
 específico en un bloque de memoria.
* @param str: un puntero al bloque de memoria.
* @param caracter: caracter a buscar Emi
* @param num: número de bytes a buscar 
dentro del bloque de memoria.
* @returns -> puntero (tipo void) a primera aparición del carácter
 en el bloque de memoria o NULL si no encuentra
*/
void	*ft_memchr(const void *str, int caracter, unsigned int num);

/** 
* @brief Compara dos áreas de memoria y devuelve 
la diferencia entre el primer byte diferente, 
si lo hay, o 0 si las áreas de memoria son iguales.
* @param dest: puntero a la primera área de memoria.
* @param src: puntero a la segunda área de memoria.
* @param num: número de bytes a comparar.
* @returns int -> 0 si las áreas de memoria son iguales.
valor positivo si primer byte diferente en s1 es mayor que en s2.
Un valor negativo si primer byte diferente s1 es menor que en s2.
*/
int	ft_memcmp(const void *str1, const void *str2, unsigned int num);

/** 
* @brief Asigna memoria para una matriz de elementos con un recuento
 específico y un tamaño n. Comprueba si hay desbordamiento, 
 asigna memoria usando malloc y pone a cero la memoria 
 antes de devolver el puntero a la memoria asignada.
* @param count: número de elementos a asignar.
* @param size: tamaño de cada elemento.
* @returns void -> Si la asignación de memoria se realiza correctamente, 
se devuelve un puntero al bloque de memoria asignado.
Si el recuento o n es cero o si falla la asignación de memoria, 
se devuelve NULL.
*/
void	*ft_calloc(unsigned int count, unsigned int size);

/** 
* @brief duplicar una cadena terminada en nulo (src) asignando 
memoria para una nueva cadena y copiando el contenido.
* @param str: puntero a la cadena fuente terminada en nulo que se duplicará.
* @returns char* -> puntero a la cadena duplicada recién asignada. 
Si falla la asignación de memoria, la función devuelve NULL.
*/
char	*ft_strdup(const char *str);

/** 
* @brief Extrae una subcadena de una cadena que comienza en el inicio 
del índice con una longitud especificada len. Asigna memoria para la subcadena, 
copia los caracteres de s a la subcadena y devuelve el puntero a la subcadena.
* @param str: puntero a la cadena de origen.
* @param start: índice inicial de la subcadena en la cadena de origen.
* @param len: El índice del caracter en ’s’ desde el que empezar la substring.
* @returns char * -> Si la asignación de memoria se realiza correctamente 
o si len es cero, se devuelve un puntero a la subcadena asignada.
Si s es NULL o si falla la asignación de memoria, se devuelve NULL.
*/
char	*ft_substr(const char *str, unsigned int start, unsigned int len);

/** 
* @brief Reserva con malloc() y devuelve una nueva
string, formada por la concatenación de str1 y str2.
* @param str1: 1º string.
* @param str2: string a añadir a str1.
* @returns char *-> nueva string.
NULL si falla la reserva de memoria.
*/
char	*ft_strjoin( char const *str1, char const *str2);

/** 
* @brief Recorta los caracteres iniciales y finales de una cadena
en función de un conjunto de caracteres determinado.
* @param str1: puntero a la cadena que se va a recortar.
* @param set: puntero al conjunto de caracteres que se van a recortar.
* @returns char *-> Si la asignación de memoria se realiza correctamente 
y la cadena recortada resultante no está vacía, se devuelve un puntero a 
la cadena recortada. Si str1 o set es NULL, o si falla la asignación de memoria, 
o si la cadena recortada resultante está vacía, se devuelve NULL.
*/
char	*ft_strtrim(char const *str1, char const *set);

/** 
* @brief  Aplica una función a cada carácter de una cadena, 
creando una nueva cadena con los resultados.
* @param str: puntero a la cadena de entrada.
* @param function: función que se aplicará a cada carácter.
Toma un 'unsigned int' (el índice) y un char como parámetros, 
y devuelve un nuevo carácter basado en el índice y el carácter de entrada.
* @returns char *-> Una cadena asignada dinámicamente resultante de 
la aplicación de la función a cada carácter de la cadena de entrada.
Se devuelve NULL si falla la asignación de memoria o si la cadena de 
entrada es NULL.
*/
char	*ft_strmapi(char const *str, char (*function)(unsigned int, char));

/** 
* @brief  Aplica una función a cada carácter de una cadena, 
creando una nueva cadena con los resultados.
* @param str: puntero a la cadena sobre la que se va a iterar.
* @param function: función que se aplicará a cada carácter.
Toma un 'unsigned int' (el índice) y un puntero a un carácter 
como parámetros, y realiza alguna operación sobre el carácter.
* @returns -> Ninguno.
*/
void	ft_striteri(char *str, void (*function)(unsigned int, char *));

// FUNCIONES STRING  -----------------------------------
// -----------------------------------------------------

/** 
* @brief Convierte un carácter en minúscula a su equivalente en mayúscula.
* @param character:  Caracter a convertir.
* @returns unsigned int -> El equivalente en mayúscula del carácter minúscula.
El carácter de entrada en sí, si no es una letra minúscula.
*/
int	ft_toupper(int character);

/** 
* @brief Convierte un carácter en mayúscula a su equivalente en minúscula.
* @param character:  Caracter a convertir.
* @returns unsigned int -> El equivalente en minúscula del carácter mayúscula.
El carácter de entrada en sí, si no es una letra mayúscula.
*/
int	ft_tolower(int character);

// retorna longitud del string
unsigned int	ft_strlen(const char *string);

/** 
* @brief Agrega una cadena desde el origen al destino 
con un límite de tamaño específico, 
asegurando una terminación nula adecuada.
* @param dest:  puntero a la cadena de destino.
* @param src:  puntero a la cadena de origen.
* @param size:  límite de tamaño del búfer de destino.
* @returns unsigned int -> longitud total de la cadena concatenada
o longitud = size + long src.
*/
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int destsize);

/** 
* @brief Copia una cadena terminada en nulo de src a destino, 
asegurando una terminación nula adecuada dentro de un tamaño limitado de n. 
Devuelve la longitud de la cadena fuente.
* @param dest:  puntero a la cadena de destino.
* @param src:  puntero a la cadena de origen.
* @param size:  límite de tamaño del búfer de destino.
* @returns unsigned int -> longitud de la cadena de origen.
*/
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int destsize);

/** 
* @brief Busca la primera aparición de un carácter específico en una cadena.
* @param str:  puntero a la cadena terminada en nulo 
en la que se realiza la búsqueda.
* @param character:  El caracter a buscar.
* @returns char * -> Puntero a la primera aparición del carácter en la cadena.
NULL si no se encuentra el carácter.
*/
char	*ft_strchr(const char *str, int character);

/** 
* @brief Busca la última aparición de un carácter específico en una cadena.
* @param str:  puntero a la cadena de entrada.
* @param character:  El caracter a buscar.
* @returns char * -> Puntero a la última aparición del carácter en la cadena.
NULL si no se encuentra el carácter.
*/
char	*ft_strrchr(const char *str, int character);

/** 
* @brief Compara dos cadenas hasta una longitud especificada.
* @param dest: puntero a la primera cadena.
* @param src:  puntero a la segunda cadena.
* @param num:  número máximo de caracteres a comparar.
* @returns int -> 0 si las cadenas son iguales.
valor positivo si primer byte diferente en s1 es mayor que en s2.
Un valor negativo si primer byte diferente s1 es menor que en s2.
*/
int	ft_strncmp(const char *str1, const char *str2, unsigned int num);

/** 
* @brief Compara dos cadenas hasta una longitud especificada.
* @param haystack: puntero a la cadena que se va a buscar.
* @param needle:  un puntero a la subcadena a buscar.
* @param num:  número máximo de caracteres a comparar.
* @returns int -> Si se encuentra la subcadena, se devuelve puntero
 a la primera aparición de la subcadena dentro de la cadena.
Si no se encuentra la subcadena o si n es cero, se devuelve NULL.
*/
char	*ft_strnstr(const char *src, const char *toFind, size_t num);

/** 
* @brief Convierte una representación de cadena de un número entero
en su valor entero correspondiente.
* @param str: puntero a la cadena que se va a converti.
* @returns int -> valor entero obtenido de la cadena de entrada
o valor 0 como error.
*/
int	ft_atoi(const char *str);

/** 
* @brief Convierte un número entero en una representación string.
* @param num: número entero que se va a convertir.
* @returns char * -> Una cadena asignada dinámicamente que representa 
el número entero convertido.
Se devuelve NULL si falla la asignación de memoria.
*/
char	*ft_itoa(int num);

/** 
* @brief Divide una cadena en una matriz de subcadenas 
según un carácter delimitador.
* @param str: puntero a la cadena que se va a dividir.
* @param character: carácter delimitador utilizado para dividir la cadena.
* @returns char ** -> Una matriz de cadenas asignada dinámicamente que 
representa las subcadenas divididas. 
El último elemento de la matriz se establece en NULL.
NULL si falla la asignación de memoria o si 'str' es NULL.
*/
char	**ft_split(char const *str, char character);

// FUNCIONES CON FILES DESCRIPTORS  -------------------
// ----------------------------------------------------

/** 
* @brief Escribe el carácter c en el 'descriptor de archivo' fd.
* @param character: carácter que se escribirá en el descriptor 
de archivo especificado.
* @param fd: descriptor de archivo en el que se escribirá el carácter.
* @returns -> Ninguno.
*/
void	ft_putchar_fd(char character, int fd);

/** 
* @brief Escribe una string en un descriptor de archivo específico.
* @param str: puntero a la cadena que se va a escribir.
* @param fd: descriptor de archivo en el que se escribirá el carácter.
* @returns -> Ninguno.
*/
void	ft_putstr_fd(char *str, int fd);

/** 
* @brief Escribe la cadena s en el descriptor de archivo especificado fd, 
seguida de un carácter de nueva línea '\n'.
* @param str: puntero a la cadena que se va a escribir.
* @param fd: descriptor de archivo en el que se escribirá el carácter.
* @returns -> Ninguno.
*/
void	ft_putendl_fd(char *str, int fd);

/** 
* @brief Convierte el número entero 'n' a su representación decimal y escribe el 
resultado en el descriptor de archivo especificado. 
* @param num: número entero que se va a escribi.
* @param fd: descriptor de archivo en el que se escribirá el numero entero.
* @returns -> Ninguno.
*/
void	ft_putnbr_fd(int num, int fd);

// FUNCIONES LIST  -----------------------------------
// ----------------------------------------------------

// FUNCIONES PRINT  -----------------------------------
// ----------------------------------------------------

#endif