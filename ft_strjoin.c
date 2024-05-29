/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:25:29 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/29 23:29:23 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Una utilidad crítica para concatenar cadenas 
y administrar la memoria de manera eficiente. */

char	*ft_strjoin(char const *str1, char const *str2)
{
	unsigned char	*str;
	unsigned int	str1_len;
	unsigned int	str2_len;
	unsigned int	str1_index;
	unsigned int	str2_index;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	str1_index = 0;
	str2_index = 0;
	str = malloc(str1_len + str2_len + 1);
	if (!str || (!str1 && !str2))
		return (NULL);
	while (str1[str1_index] != '\0')
	{
		str[str1_index] = str1[str1_index];
		str1_index++;
	}
	while (str2[str2_index] != '\0')
	{
		str[str1_index + str2_index] = str2[str2_index];
		str2_index++;
	}
	str[str1_index + str2_index] = '\0';
	return ((char *) str);
}

/* int main()
{
	char const *str1 = "First ";
	char const *str2 = "Second ";

	printf("%s",ft_strjoin(str1, str2));
	return (0);
} */