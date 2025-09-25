#include <stdio.h>

int	is_power(unsigned int n)
{
	unsigned int	res = 1;
	int	i = 0;

	while (res <= n)
	{
		res = res * 2 ;
		if (res == n)
			return (1);
		i++;
	}
	return (0);
}

int	main()
{
	unsigned int	n = 1135;
	int res = 0;

	res = is_power(n);
	printf("%d", res);
	return (0);
}
		











