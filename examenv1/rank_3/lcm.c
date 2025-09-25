

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	i = 1;
	unsigned int	res = 1;
	
	if ( a == 0 || b == 0)
		return (0);
	while (a > 0)
	{
		if (res % a == 0 && res % b == 0)
			return (res);
		res = a * i;
		i++;
	}
	return (res);
}

#include "stdio.h"

int	main()
{
	int	a = 398500000;
	int	b = 556415;
	int	res;

	res = lcm(a, b);
	printf("el mcd de % d y % d es : %d\n", a, b, res);
	return (0);
}
