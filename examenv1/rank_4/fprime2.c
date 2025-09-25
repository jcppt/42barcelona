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
	int 	i = 0;
	int	val = 0;
	int	div = 0;

	if (argc == 1)
		return (0);
	val = atoi(argv[1]);
	while (val >= i) 
	{
		div = val - i;
		if (is_prime(div) == 1)
			if (val % (val - i) == 0)
			{
				printf("%d", div);
				printf("*");
			}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
