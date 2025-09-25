#include <unistd.h>
#include <stdio.h>

int	to_number(char *num)
{
	int	i = 0;
	int	dig = 0;
	int	res = 0;

	while (num[i])
	{	
		dig = num[i] - '0';
		res = (res * 10) + dig;
		i++;
	}
	return (res);
}

void	to_hex(int res)
{
	char	hex[16] = "0123456789abcdef";

	if (res >= 16)
	{
		to_hex(res / 16);
		res = res % 16;
		write(1, &hex[res], 1);
	}
	else
	{
		write(1, &hex[res], 1);
	}
}

int	main(int argc, char **argv)
{
	int	res = 0;

	if (argc == 2)
	{
		res = to_number(argv[1]);
		to_hex(res);
	}
	return (0);
}
