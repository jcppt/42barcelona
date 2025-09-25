#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;

	while (argc > i)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j]) >= 'A' && (argv[i][j]) <= 'Z')
				argv[i][j] = (argv[i][j]) + 32;
			j++;
		}
		j = 0;
		if ((argv[i][j]) >= 'a' && (argv[i][j]) <= 'z')
			argv[i][j] = (argv[i][j]) - 32;
		write(1, &(argv[i][j]), 1);
		j++;
		while (argv[i][j])
		{
			if (((argv[i][j]) >= 'a' && (argv[i][j]) <= 'z') && ((argv[i][j - 1]) < 33))
				argv[i][j] = (argv[i][j]) - 32;
			write(1, &(argv[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
