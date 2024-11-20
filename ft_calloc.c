#include <stddef.h>

void *memset(void *s, int c, size_t n)
{
    
}

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total_size = nmemb * size;
    void *ptr = malloc(total_size);
    if (ptr == NULL)
    {
        return NULL;
    }

}

int main()
{
    ft_calloc(5,10);
    printf("")
    return 0;
}