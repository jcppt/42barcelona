#include <unistd.h>
#include <stdio.h>

int	to_number(char *c)
{
	int res = 0;
	int digit = 0;
	int	i = 0;	

	while (c[i])
	{
		digit = c[i] - '0';
		if (digit >= 0 && digit <= 9)
			res = (10 * res) + digit;
		else
			return (1);
		i++;
	}
	return (res);
}



int	main(int argc, char **argv)
{
	int	a = 0;
	int	b = 0;
	int	temp = 0;

	if (argc == 3)
	{	
		a = to_number(argv[1]);
    		b = to_number(argv[2]);
		
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		while (b > 0)
		{
			temp = b;
			b = a % b;
			a = temp;
		}
	printf("el MCD es : %d\n", a);
	}
	return (0);
}
