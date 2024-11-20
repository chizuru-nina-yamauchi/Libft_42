#include <stddef.h>
size_t ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;
    }
    if (i < n)
    {
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    }
    return (0);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t little_len;
    size_t i;

    little_len = ft_strlen(little);
    i = 0;
    if (little_len == 0)
    {
        return (char *)big;
    }
    while (i <= len - little_len)
    {
       if (ft_strncmp(big + i, little, little_len) == 0)
       {
            return (char *)(big + i);
       }
       i++;
    }
    return NULL;
}

#include <stdio.h>
int main()
{
    char *big_str = "Mi marido abla espanol.";
    char *small_str = "abla";
    printf("Small string found in big string: %s", ft_strnstr(big_str, small_str, 20));
    return 0;

}