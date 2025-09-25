#include <unistd.h>

int	to_num(char *str)
{
	int	i = 0;
	int dig = 0;
	int val = 0;

	while (str[i])
	{
		dig = str[i] - '0';
		val = (val * 10) + dig;
		i++;
	}
	return (val);
}

void num_to_asci(int i)
{
	int	res = 0;
	
	if (i > 9)
		num_to_asci(i / 10);
	res = (i % 10) + '0';
	write(1, &res, 1);
}

int	main(int argc, char **argv)
{
	int	num = 0;
	int	res = 0;

	if (argc == 2)
	{
		int	i = 1;
		num = to_num(argv[1]);
		while (i <= 9)
		{
			res = i * num;
			num_to_asci(i);
			write(1, " x ", 3);
			num_to_asci(num);
			write(1, " = ", 3);
			num_to_asci(res);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
