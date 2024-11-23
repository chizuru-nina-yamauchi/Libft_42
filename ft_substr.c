#include <stdlib.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	while (n--)
	{
		*d = *s;  // copy byte by byte
		d++;
		s++;
	}
	return (dest); // return the destination pointer
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char  *sub;
	if (s == NULL)  // ensure the input string is not NULL
		return (NULL);

	sub = (char *)malloc((len + 1) * sizeof(char)); // allocate memory for the substring includeing '\0'
	if (sub == NULL)
		return (NULL); // return NULL if memory allocation fails
	ft_memcpy(sub, s + start, len);  // copy the substring
	sub[len] = '\0'; // null terminate the substring
	return (sub); // return the created substring
}

#include <stdio.h>
int 	main()
{
	char const	*arr = "In 2023 habe ich Java Programmierungssprache gelernt.";
	unsigned int	start_index = 5;
	size_t	length = 10;
	char	*substring = ft_substr(arr, start_index, length);
	printf("The created substring that starts at index %d for length %zu from '%s'\n: %s\n", start_index, length, arr, substring);
	free(substring);  // free memory
	return (0);
}

