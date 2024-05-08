#include "libft.h"
#include <stdio.h> 

int main()
{
	size_t x = 5;
	int i = 0;
	size_t l = 0;
	l--;

	while(i < 9)
	{
		x *= 10;
		i++;
	}
//	void* some = calloc(x, x);
	void* some = ft_calloc(x, x);
	printf("%d\n", (int)some);
}
