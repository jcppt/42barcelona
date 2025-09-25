#include <unistd.h>

int	to_int(char *str)
{
	int	i = 0;
	int	dig = 0;
	int	val = 0;

	while (str[i])
	{
		dig = str[i] - '0';
		val = (val * 10) + dig;
		i++;
	}
	return (val);
}

int	is_prime(int val)
{
	int i = 2;

	if (val < 2)
		return (0);
	if (val / 2 == 0)
		return (0);
	while ( i <= val / 2)
	{
		if (val % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	to_char(int res)
{
	char	dig;

	if (res > 9)
		to_char(res/10);
	dig = (res % 10) + '0';
	write(1, &dig, 1);
}

int	main(int argc, char **argv)
{
	int	val = 0;
	int	res = 0;

	if (argc == 2)
	{
		val = to_int(argv[1]);
		while (val > 0)
		{	
			if (is_prime(val) == 1)
				res = res + val;
			val--;
		}
		to_char(res);
	}
	write(1, "\n", 1);
	return(0);
}
