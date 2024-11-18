/*searches for the first occurrence of a byte in a block of memory*/
#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;

    while (n--)
    {

        if (*ptr == c)
        return ptr;
        ptr++;
    }
    return NULL;

}

#include <stdio.h>
int main()
{
    char *src_arr = "Ich habe das nicht bemerkt.";
    char c = 'b';
    size_t size = 20; // search b in the first 20 bytes of the string
    unsigned char *result = ft_memchr(src_arr, c, size);
    printf("%s is the first occurrence of char '%c' with %zu from '%s'",result, c, size, src_arr);
    return (0);
 
}