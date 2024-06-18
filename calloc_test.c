#include "libft.h"
#include <stdio.h> 
#include <limits.h> 

int main()
{
	size_t x = 5;
	int i = 0;
	size_t l = 0;
	l--;

	while(i < 5)
	{
		x *= 10;
		i++;
	}
	
//	void* some = calloc(x, x);
	void* some = ft_calloc(INT_MAX, INT_MAX);
	printf("%d\n", (int)some);
	free(some);
	return (0);
}
