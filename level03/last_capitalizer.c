#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	int	a = 0;
	
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = argv[i][j] + 32;
			j++;
		}
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j + 1] < 33))
				a = argv[i][j] - 32;
			else
				a = argv[i][j];
			write(1, &a, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

