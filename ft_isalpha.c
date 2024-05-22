/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juagomez <juagomez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:16:00 by juagomez          #+#    #+#             */
/*   Updated: 2024/05/15 11:51:59 by juagomez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
static  void ft_putchar (char caracter)
    {
        write(1, &caracter, 1);
    } */

// https://42-cursus.gitbook.io/guide/rank-00/libft/libc-functions/ft_isalpha
// devuelve 0 si caracter 'int 'es alfabetico. si no, distinto 0
int ft_isalpha(int charac)
{
    unsigned int    is_alpha;

    is_alpha = 0;
    if ((charac >= 'A' && charac <= 'Z') || (charac >= 'a' && charac <= 'z'))
        { 
        is_alpha = 1;
        }
        
    return  (is_alpha);
}
// #include <ctype.h>
/* int    main(void)
{
    int caracter1;
    int caracter2;

    caracter1 = 'A';
    caracter2 = '_';
    
    ft_putchar(ft_isalpha(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isalpha(caracter2) + '0');
    ft_putchar('\n');

    ft_putchar(ft_isalpha(caracter1) + '0');
    ft_putchar('\n');
    ft_putchar(ft_isalpha(caracter2) + '0');
    ft_putchar('\n');

    return 0;
} */
