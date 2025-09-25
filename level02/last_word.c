#include <unistd.h>

void	last_word(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	i--;
	while (str[i] && i > 0)
	{
		if (str[i] == 32 || str[i] == 9)
			break;
		i--;
	}
	i++;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

