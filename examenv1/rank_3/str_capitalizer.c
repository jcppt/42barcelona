#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 1;
	int p = 0;

	while(i < argc)
	{	
		p = 0;
		while(argv[i][p] != '\0')
		{
			if (argv[i][p] >= 'A' && argv[i][p] <= 'Z')
				argv[i][p] = argv[i][p] + 32;
			p++;
		}
		p = 0;
		if (argv[i][p] >= 'a' && argv[i][p] <= 'z')
			argv[i][p] = argv[i][p] - 32;
		p++;
		while(argv[i][p])
		{
			if ((argv[i][p] >= 'a' && argv[i][p] <= 'z') && (argv[i][p - 1] == 32 || argv[i][p - 1] == 9))
				argv[i][p] = argv[i][p] - 32;
			p++;
		}
		p = 0;
		while (argv[i][p])
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
