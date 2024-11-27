/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char	*arr = " -8765ahous978";
	int	default_result = atoi(arr);
	int	result = ft_atoi(arr);
	printf("The default atoi result: %d\n", default_result);
	printf("The created atoi result: %d\n", result);
	return (0);

}*/

/*
#include <stdio.h>
int	main()
{
	int	*arr = (int *)ft_calloc(5,sizeof(int));
	if (arr != NULL)
	{
		printf("Array pointer: %p\n", (void *)arr);
		free(arr);
	}else
	{
		printf("Memory allocation failed");
	}
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char ch = '@';
	if(ft_isalnum(ch))
	{
		printf("It is alphanumeric");
	}else
	{
		printf("It is not alphanumeric");
	}

	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char ch = '1';
	if (ft_isalpha(ch))
	{
		printf("It is alphabet");
	}else
	{
		printf("It is not a alphabet");
	}

	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char ch = '#';
	if (ft_isascii(ch))
	{
		printf("It is ascii.");
	}else
	{
		printf("It is not ascii.");
	}
}*/

/*
#include <stdio.h>
int	main()
{
	char ch = 's';
	if (ft_isdigit(ch))
	{
		printf("It is a digit");
	}else
	{
		printf("It is not adigit");
	}

	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char ch = ' ';
	if (ft_isprint(ch))
	{
		printf("Ascii %d is printable", ch);
	}else
	{
		printf("It is not printable");
	}
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	int	number = -2147483648;
	char *arr = ft_itoa(number);
	printf("The number printed as a char array with malloc:\n%s\n", arr);
	return 0;
}*/

/*
#include <stdio.h>

int	main()
{
	char arr[] = "Donde esta el bano?";
	char ch = 'h';
	ft_memset(arr + 6, ch, 6*sizeof(char));
	printf("Before: %s\n", "Donde esta el bano?");
	printf("After memset: %s\n", arr);
	return (0);
}
*/

/*
#include <stdio.h>
int	main()
{
	ft_putchar_fd('i', 1);
	return 0;
}*/

/*
#include <stdio.h>

int	main()
{
	ft_putendl_fd("Avente", 1);
	return 0;
}*/

/*
#include <stdio.h>

int	main()
{
	ft_putnbr_fd(-2147483648, 1);
	return 0;
}*/

/*
#include <stdio.h>

int	main()
{
	ft_putstr_fd("Ayayay", 1);
}*/

/*
#include <stdio.h>

int	main()
{
	char	arr[] = "hi,hoy,ay,yay,boy";
	char	**each_word = ft_split(arr, ',');
	size_t	i = 0;
	if (each_word)
	{
		while (each_word[i])
		{
			printf("index of %zu: word: %s\n", i, each_word[i]);
			free(each_word[i]);
			i++;
		}
		free(each_word);
	}
	return (0);
}
*/

/*
#include <stdio.h>
int	main()
{
	char	*arr = "aiueoTEST";
	char	c = 'o';
	printf("There is %s",ft_strchr(arr,c));
}
*/

/*
#include <stdio.h>

int	main()
{
	char *original = "Ich lerne die Programmierugssprache C.";
	char *duplicate = ft_strdup(original);
	printf("It is duplicated: %s", duplicate);
	free(duplicate);
	return (0);
}*/

/*
#include <stdio.h>
void	my_func(unsigned int i, char *arr)
{
	if (i % 2 == 0)
	{
		*arr = ft_toupper(*arr);
	}else
	{
		*arr = ft_tolower(*arr);
	}
}
int	main()
{
	char	arr1[] = "Hellooooooooo";
	printf("Original string: %s\n", arr1);
	ft_striteri(arr1, my_func);
	printf("The modified string: %s\n", arr1);
	return (0);
}*/

/*
#include <stdio.h>

int	main()
{
	char	*arr1 = "Ablo areman.";
	char	*arr2 = "Muy bien.";

	char	*concatinated = ft_strjoin(arr1, arr2);
	printf("'%s' and '%s' are concatinated: %s\n", arr1, arr2, concatinated);
	return 0;
}*/

/*
#include <stdio.h>
int	main()
{
	char	src[] = "Soy japonesa.";
	char	dst[] = "Ich bin gerade mit dem Ubahn angekommen.";
	size_t	len = ft_strlcat(dst, src, 50);
	printf("The concatinated string: %s\n", dst);
	printf("The length of initial length of dst + src: %zu\n", len);
	return (0);
}
*/

/*
#include <stdio.h>
int	main()
{
	char	src[] = "Muy bien!";
	char	dest[20];

	size_t len = ft_strlcpy(dest, src, 9);
	printf("The copied string: %s\n", dest);
	printf("Length of source string: %zu\n", len);

	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char *str = "aiueo";
	unsigned int length = ft_strlen(str);
	printf("The length of %s is %d.", str, length);
	return (0);
}*/

/*
#include <stdio.h>

char	example_function(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (char)ft_toupper(c);  // convert to uppercase if index is even
	}
	return c; // leave the character unchanged if index is odd
}

int	main()
{
	char	*s = "ayayayayayay";
	char	*new_string = ft_strmapi(s, example_function);
	printf("The string '%s' becomes: %s\n", s, new_string);
	free(new_string);
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char *arr1 = "ABCDEH";
	char *arr2 = "ABCDEFG";
	int	result = ft_strncmp(arr1, arr2, 8);
	if (result == 0)
	{
		printf("They are equal.");
	}else if (result > 0)
	{
		printf("arr1 is bigger than arr2");
	}else
	{
		printf("arr1 is smaller than arr2");
	}
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char *arr = "Latte Machiato con leche de avena por favor";
	char ch = 'o';
	printf("Last occurence of %c is %s", ch , ft_strrchr(arr, ch));
	return (0);
}*/

/*
#include <stdio.h>

int	main()
{
	char	*arr = "aiueoIch habe viel Hungeraiueo";
	char	*trimmed = ft_strtrim(arr, "aiueo");
	printf("Original array: %s\n", arr);
	printf("Trimmed array: %s\n", trimmed);
	free(trimmed);
	return 0;
}*/

/*
#include <stdio.h>
int	main()
{
	char ch = 'U';
	printf("%c becomes %c", ch, ft_tolower(ch));
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char s = 'o';
	printf("%c becomes %c", s, ft_toupper(s));
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	char *arr1 = "ABCDEH";
	char *arr2 = "ABCDEFG";
	int	result = ft_strncmp(arr1, arr2, 8);
	if (result == 0)
	{
		printf("They are equal.");
	}else if (result > 0)
	{
		printf("arr1 is bigger than arr2");
	}else
	{
		printf("arr1 is smaller than arr2");
	}
	return (0);
}*/

/*
#include <stdio.h>

int	main()
{
	char	*arr1 = "Sehr geehrte Damen und Herren, ";
	char 	arr2[30];
	size_t	byte = 10;
	ft_memmove(arr2, arr1, byte);
	printf("The memory was moved from src '%s' for %zu characters: %s", arr1, byte, arr2);
	return (0);
}*/

/*
#include <stdio.h>
int	main()
{
	const char src_arr[] = "Die Vergangenheit";
	char dst_arr[30];
	ft_memcpy(dst_arr, src_arr, 7 * sizeof(char));
	printf("'%s' is copied from src '%s'.", dst_arr, src_arr);
	return 0;
}*/


// LinkedList
/*
#include <stdio.h>
int	main()
{
	int	value_to_put = 10;
	t_list	*node;
	
	node = ft_lstnew(&value_to_put);
	if (node)
	{	
		printf("Node content: %d\n", *(int *)node->content);
		printf("Node next: %p\n", (void *)node->next);
		free(node);
	}else
	printf("Memory allocation fail");
	return 0;
}*/



//ft_lstadd_front.c
/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s ->", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main()
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("Second");
	t_list *node2 = ft_lstnew("Third");
	
	list = node1;
	node1->next = node2;
	
	printf("Before adding front: \n");
	print_list(list);
	
	t_list *new_node = ft_lstnew("First");
	ft_lstadd_front(&list, new_node);
	
	printf("After adding front:\n");
	print_list(list);
	return 0;
}
*/

/*
#include <stdio.h>

int	main()
{
	t_list	*node1 = ft_lstnew("First");
	t_list	*node2 = ft_lstnew("Second");
	t_list	*node3 = ft_lstnew("Third");

	node1->next = node2;
	node2->next = node3;
	
	int	size = ft_lstsize(node1);
	printf("List size: %d\n", size);
	return 0;
}*/

/*
int	main()
{
	t_list	*node1 = ft_lstnew("First");
	t_list	*node2 = ft_lstnew("Second");
	t_list	*node3 = ft_lstnew("Third");
	
	node1->next = node2;
	node2->next = node3;
	
	t_list	*last_node = ft_lstlast(node1);
	
	if(last_node)
		printf("Last node content: %s\n", (char *)last_node->content);
	return 0;
}
*/
