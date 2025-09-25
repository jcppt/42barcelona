#include <unistd.h>

int	number(char *str)
{
	int	i = 0;
	int	dig = 0;
	int	res = 0;

	while (str[i])
	{
		dig = str[i] - '0';
		res = (res * 10) + dig;
		i++;
	}
	return (res);
}

int	is_prime(int val)
{
	int i = 3;
	if (val < 2)
		return (0); 
	if (val == 2)
		return (1);
	if (val % 2 == 0)
		return (0);
	while (i * i <= val)
	{
		if (val % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void to_ascii(int acum)
{
	char	dig;
	if ( acum > 9) 		
		to_ascii(acum / 10);
	dig = (acum % 10) + '0';
	write(1, &dig, 1);
}

int	main(int argc, char **argv)
{
	int	val = 0;
	int	acum = 0;

	if (argc == 2)
	{
		val = number(argv[1]);
		while (val > 1)
		{
			if (is_prime(val) == 1)
				acum = acum + val;
			val--;
		}
		to_ascii(acum);
	}
	write(1, "\n", 1);
	return (0);
}
 
			
