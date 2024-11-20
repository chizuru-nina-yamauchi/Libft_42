#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{

    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;

    while (n--)
    {

        if (*ptr1 != *ptr2)
            return (*ptr1 - *ptr2);
        ptr1++;
        ptr2++;

    }
    return 0;
}

#include <stdio.h>
int main()
{
    char *arr1 = "Venga Vamos!";
    char *arr2 = "Viva la vida";
    char *arr3 = "Vielen lieben Dank";

    printf("Arr1 and Arr2: %d\n", ft_memcmp(arr1, arr2, 2 * sizeof(char)));
    printf("Arr2 and Arr3: %d\n", ft_memcmp(arr2, arr3, 3 * sizeof(char)));

    return 0; 
}


