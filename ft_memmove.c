/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:53:51 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/23 19:18:43 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *src, void *dest, unsigned int n)
{
	
	return (dest);
}

int	main(void)
{
	char	origen[] = "Hola";
	char	destino[6];
	unsigned int num = 3;	

	printf("%s", memmove(destino, origen, num));
	return (0);
}