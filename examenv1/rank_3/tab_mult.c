#include <unistd.h>
#include <stdio.h>

int	num_conv(char *str)
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

void	num_to_ascii(int res)
{
	char dig;
	
	if(res < 0)
	{
		write(1, "-", 1);
		res = -res;
	}
	if (res > 9)
		num_to_ascii(res / 10);
	dig = (res % 10) + '0';
	write(1, &dig, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	num = 0;
	int res = 0;
	i = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		num = num_conv(argv[1]);
		i = 1;
		while (i < 10)
		{
			res = num * i;
			num_to_ascii(i);
			write(1, " x ", 3);
			num_to_ascii(num);
			write(1, " = ", 3);
			num_to_ascii(res);
			write(1,"\n", 1);
			i++;
		}
	}
	return (0);
}
			
			
			
			
			
