#include <unistd.h>

void	rostring(char *str)
{
	int	i = 0;
	int p = 0;

	while (str[i] < 33)
		i++;
	p = i;
	while (str[i] > 32)
		i++;
	while (str[i])
	{
		if (str[i] > 32 && str[i + 1] < 33)
		{
			write(1, &str[i], 1);
			write(1, " ", 1);
		}
		else if (str[i] > 32 && str[i + 1] > 32)
			write(1, &str[i], 1);
		i++;
	}
	i = p;
	while (str[i] > 32)
	{
		write(1, &str[i], 1);	
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	
	rostring(argv[1]);
	write(1, "\0", 1);
	return (0);
}
