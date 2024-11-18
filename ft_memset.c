/*memset fills a block of memory with a specific value
- use unsigned char * to work with byte-level manupilation
- loop over the memory block of size len, setting each byte to c.
*/

#include <stddef.h>

void *ft_memset(void *s, int c, size_t len)
{
	unsigned char *ptr = s;
	unsigned char value = (unsigned char)c;

    while (len--)
    {
        *ptr = value;
        ptr++;
    }
    return s;
}