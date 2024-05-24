/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:24:19 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/24 20:32:53 by juagomez         ###   ########.fr       */
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

// ESTRUCTURAS DATOS -----------------------------------
// ----------------------------------------------------

// FUNCIONES CHECK  -----------------------------------
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

// FUNCIONES MEMORY  -----------------------------------
// ----------------------------------------------------

// rellena con ceros n bytes en string destino
void	*ft_bzero(void *dest, unsigned int len);

// escribe 'len' bytes de valor 'caracter' en la cadena 'dest'
void	*ft_memset(void *dest, int caracter, unsigned int len);

// copia n bytes desde 'scr' a 'dest' . superposicion de memoria
void	*ft_memcpy(void *dest, const void *src, unsigned int n);

/* copia un bloque de memoria desde el origen al destino, 
manejando regiones de memoria superpuestas. */
void	*ft_memmove(void *dest, const void *src, unsigned int num);

// @brief Busca la primera aparición de un carácter específico en un bloque de memoria.
// @param str: un puntero al bloque de memoria.
// @param caracter: caracter a buscar Emi
// @param num: número de bytes a buscar dentro del bloque de memoria.
// @returns -> puntero (tipo void) a primera aparición del carácter en el bloque de memoria o NULL si no encuentra
// void    *ft_memchr(const void *str, int caracter, unsigned int num);

// FUNCIONES STRING  -----------------------------------
// ----------------------------------------------------

// retorna longitud del string
int	ft_strlen(const char *string);

// FUNCIONES LIST  -----------------------------------
// ----------------------------------------------------

// FUNCIONES PRINT  -----------------------------------
// ----------------------------------------------------

#endif