#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	r = 0;
	int	j = 1;

	if (argc == 2)
	while (argv[j][i])
	{
		if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
			r = argv[j][i] - 'A' + 1;
		else if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
			r = argv[j][i] - 'a' + 1;
		else
			r = 1;
		while (r > 0)
		{
			write (1, &argv[j][i], 1);
			r--;
		}
		i++;
	}
	return (0);
}

