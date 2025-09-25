#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_prime(int val)
{
	int	i = 2;
	if (val < 2)
		return (0);	
	while(i * i <= val)
	{
		if (val % i == 0)
			return (0);
		i++;
	}
	return (1);
}	


int	main(int argc, char **argv)
{
	int 	i = 2;
	int	val = 0;

	if (argc == 1)
		return (0);
	val = atoi(argv[1]);
	while (val > i) 
	{
		if (is_prime(i) == 1)
			if (val % i == 0)
			{
				printf("%d", i);
				printf("*");
				val = val / i;
			}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
