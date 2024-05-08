#include "libft.h"

int main()
{
	char *str = "some long string to sep";
	char sep = ' ';
	char **words = ft_split(str, sep);
	while (*words)
	{
		write(1, *words, ft_strlen(*words));
		write(1, "\n", 1);
		words++;
	}
}
