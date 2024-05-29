/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:24:19 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/29 17:42:11 by juagomez         ###   ########.fr       */
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

// ESTRUCTURAS DATOS -----------------------------------
// ----------------------------------------------------

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

// FUNCIONES STRING  -----------------------------------
// ----------------------------------------------------

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

// FUNCIONES LIST  -----------------------------------
// ----------------------------------------------------

// FUNCIONES PRINT  -----------------------------------
// ----------------------------------------------------

#endif