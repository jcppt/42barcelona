#include <unistd.h>

int	hidenp(char *str1, char *str2)
{
	int	i = 0;
	int	p = 0;

	while (str1[i])
	{
		while (str2[p])
		{
			if (str2[p] == str1[i])
				break;
			p++;
		}
		i++;
	}
	if ( !str1[i] && str2[p])
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	res = 0;
	
	if (argc == 3)
	{
		res = hidenp(argv[1], argv[2]);
		if (res == 1)
			write(1, "1", 1);
		if (res == 0)
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
