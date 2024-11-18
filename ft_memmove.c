/* memmove is similar to memcpy*/
#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{


}

#include <stdio.h>
int main()
{
    int source[] = {1,2,3,4,5,6,7,8,9,10};
    int dest[10];
    ft_memmove(dest, source, 5 * sizeof(int));
    printf("The memory is moved to the destination: %s", dest);
    return (0);

}
