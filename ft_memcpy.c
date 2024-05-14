
#include <stdio.h>

// copia n bytes desde 'scr' a 'dest' . superposicion
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    /* declare a temporary pointer for dst + src */
    unsigned char *temp1;
    unsigned char *temp2;
    size_t indice;

    /* if src and dst are NULL, return dst */
    if(src == NULL || dest == NULL)
        return (dest);

    /* make dst tmp pointer equal to dst converted to unsigned char * */
    temp1 = (unsigned char *)dest;
    /* make src tmp pointer equal to src converted to unsigned char * */
    temp2 = (unsigned char *)src;
    indice =0;

    /* loop over the dst tmp pointer while we didn't reach n */
    while (indice < n)
    {   
        /* set the current byte of dst tmp pointer equal to current byte of src tmp pointer */
        temp1[indice] = temp2[indice];
        indice++;
    }
    return (dest);
}

#include <string.h>

int main(void)
{
    char    strSrc[] = "HolaCaracola";
    char    strDest[] = "Adios";

    char    strNullSrc[] = " ";
    char    strNullDest[] = " ";
    size_t n = 4;   

    printf("test 1 memcpy %s \n", memcpy(strDest, strSrc, n)); 
    printf("test 1 ft_memcpy %s \n", ft_memcpy(strDest, strSrc, n));

    /*printf("test 1 memcpy %s \n", memcpy(strNullDest, strNullSrc, n)); 
    printf("test 1 ft_memcpy %s \n", ft_memcpy(strNullDest, strNullSrc, n));*/

    return (0);
}
