
#include "libft.h"

// rellena con ceros n bytes en string destino
void    *ft_bzero(void *dest, size_t len)
{
    /* declare a temporary pointer */
    unsigned char *temp;
    size_t index;
    
    /* make the temporary pointer equal to *s converted to a char * */
    temp = (unsigned char *)dest;
    index = 0;


    if (len != 0)
    {   
        /* loop on the temporary pointer while we didn't reach n characters */
        while (index < len)
        {
            /* in that loop, set the current byte equal to 0 */
            temp[index] = 0;
            index++;
        }
    }
    return (dest);
}

/* #include <stdio.h>
#include <strings.h> */

/* int main(void)
{   
    char str[] = "HolaCaracola";
    size_t n = 3;
    size_t nNull = 0;

    printf("test 1 bzero %s \n", bzero(str, n));
    printf("test 1 ft_bzero %s \n", ft_bzero(str, n));

    printf("test 2 bzero %s \n", bzero(str, nNull));
    printf("test 2 ft_bzero %s \n", ft_bzero(str, nNull));

    return (0);
}*/

