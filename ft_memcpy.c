/*copies n bytes from one memory block to another */
#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = dst;
    const unsigned char *s = src;
    while (n--)
    {
        *d = *s;
        d++;
        s++;
    }

    return dst;

}

#include <stdio.h>
int main()
{
    const char    src_arr[] = "Die Vergangenheit";
    char    dst_arr[30];
    ft_memcpy(dst_arr, src_arr, 7 * sizeof(char));
    printf("'%s' is copied from src '%s'.", dst_arr, src_arr);

    return (0);


}