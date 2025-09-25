#include <stdlib.h>
#include <stdio.h>

int	is_prime(int num)
{
	if (num < 2)
		return(0);
	if (num % 2 == 0)
		return (0);
	int i = 3;
	while (i  <= num / 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}


int	main(int argc, char **argv)
{
	int	val = 0;
	int	i = 2;
	
	if (argc == 2)
	{
		val = atoi(argv[1]);
		
		if (is_prime(val) == 1)
			printf("%d", val);
		while (i <= val)
		{
			if (val % i == 0)
			{
				printf("%d", i);
				val = val / i;
				if (val >= i)
					printf("*");
				i = 1;
			}
			i++;
		}
	}
	return (0);
}		 
		
