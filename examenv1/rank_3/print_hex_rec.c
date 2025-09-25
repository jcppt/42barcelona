#include <unistd.h>

int	number(char *a)
{
	int i = 0;
	int	val = 0;
	int	dig = 0;	

	while(a[i])
	{
		dig = a[i] - '0';
		val = val * 10 + dig;
		i++;
	}
	return (val);
}

void	hexadecimal(int val)
{
	char	hex;
	int		dighex = 0;
					
	if (val >= 16)
	{
		
		hexadecimal(val / 16);
		dighex = val % 16;
		if (dighex >= 0 && dighex <= 9)
		{
			hex = dighex + '0';
			write(1, &hex, 1);
		}
		else
		{
			hex = dighex + 'a' - 10;
			write(1, &hex, 1);
		}
	}
	else
	{
		if (val >= 0 && val <= 9)
		{
			hex = val + '0';
			write(1, &hex, 1);
		}
		else
		{
			hex = val + 'a' - 10;
			write(1, &hex, 1);
		}
	
	}
}	

int	main(int argv, char **argc)
{
	int a = 0;

	if (argv == 2)
	{
		a = number(argc[1]);
		hexadecimal(a);
	}
	write(1, "\n", 1);
	return (0);
}

	
