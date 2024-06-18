#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	
	size_t l =  (size_t)UINT_MAX;
	l++;
	//l--;
//printf("%zu\n", l);
//	printf("%zu\n", SIZE_MAX);
	
	char *some = calloc(l, 1);
	printf("%zu\n", some);
}

