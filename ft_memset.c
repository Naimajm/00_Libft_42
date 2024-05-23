/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naima <naima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:32:57 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/23 12:49:58 by naima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <unistd.h>
//#include <stdio.h>

/* escribe 'len' bytes de valor 
'caracter' en la cadena 'dest' ------------------------------- */

/* declare a temporary unsigned char * */
/* make this temporary variable equals to void *b converted to unsigned char */
// asignacion string a dest -> casteo a 'unsigned char'
/* loop on the temporary variable while we didn't reach len */
/* in that loop, set the current byte equal to c converted to unsigned char */
/* return void *b */
void	*ft_memset(void *dest, int caracter, unsigned int len)
{
	unsigned char	*temp;
	unsigned int	indice;

	temp = (unsigned char *)dest;
	indice = 0;
	while (indice < len)
	{
		temp[indice] = (unsigned char)caracter;
		indice++;
	}
	return (dest);
}

// #include <string.h>

/* int main(void)
{
    char    str1[] = "HolaCara";
    char    str2[] = "Parapapa";
    int caracter = 'x';
    size_t len = 3; 
    size_t len2 = 1;   

    printf("test 1 memset %s \n", memset(str1, caracter, len));
    printf("test 1 %s \n", ft_memset(str1, caracter, len));

    printf("test 2 memset %s \n", memset(str2, caracter, len2));
    printf("test 2 %s \n", ft_memset(str2, caracter, len2));

    return (0);
} */
