/*
stes a block of memory to zero('\0' null terminator).
Similar to memset but always sets bytes to zero
- erases the data in the n bytes of the memory starting at the location pointed to by s
But memset is standard
*/

#include <stddef.h>

void ft_bzero(void *s, size_t len)
{
	unsigned char *ptr = s;
	
	while (len--)
	{
		*ptr = 0;
		ptr++;
	}
}

#include <stdio.h>
int main()
{
    char src_arr[] = "Herzlich Glückbunsch zum Geburstag.";
    printf("Before: %s\n", src_arr);
    ft_bzero(src_arr, 5);
    printf("After:'whatever the answer is only empty string will be printed because of the null terminator' %s\n", src_arr);
    return (0);

}