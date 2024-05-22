/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:07:14 by juagomez          #+#    #+#             */
/*   Updated: 2024/04/23 14:31:41 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

/* void    ft_putchar(char caracter)
{
    write(1, &caracter, 1);
} */

// retorna longitud del string
int ft_strlen(char *string)
{   
    int contador;
    contador = 0;
    while (string[contador] != '\0')
        contador++;
    return (contador);
}

// #include <string.h>

/* int main(void)
{
    char    string1[10] = "HolaCla";
    char    string2[8] = "Hola";

    ft_putchar(strlen(string1) + '0');
    ft_putchar('\n');
    ft_putchar(strlen(string2) + '0');
    ft_putchar('\n');

    ft_putchar(ft_strlen(string1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_strlen(string2) + '0');
    ft_putchar('\n');

    return (0);
} */
