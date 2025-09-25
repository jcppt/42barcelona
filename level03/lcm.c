unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int 	i = 2;
	unsigned int	ra;
	unsigned int	rb;	
	
	while ( i < a || i < b)
	{
		ra = a % i;
		rb = b % i;
		if (ra == 0 && rb == 0)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	unsigned int    a = 2500;
	unsigned int    b = 1070;
	int    res;
	
	res = lcm(a, b);
	printf("%d \n", res);
	return (0);
}

