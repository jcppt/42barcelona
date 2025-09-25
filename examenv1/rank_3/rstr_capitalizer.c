#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		p = 0;
		while (argv[i][p] && (argv[i][p]) != '\0')
		{
			if (argv[i][p] >= 'A' && argv[i][p] <= 'Z')
				argv[i][p] = argv[i][p] + 32;
			p++;
		}
		p = 0;
		while (argv[i][p] && (argv[i][p]) != '\0')
		{
			if ((argv[i][p] >= 'a' && argv[i][p] <= 'z') && 
			((argv[i][p + 1]) == 32 || (argv[i][p + 1]) == 20 || (argv[i][p + 1]) == '\0'))
				argv[i][p] = argv[i][p] - 32;
			p++;
		}
		p = 0;
		while ((argv[i][p]) && ((argv[i][p]) != '\0'))
		{
			write(1, &(argv[i][p]), 1);
			p++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
