#include <unistd.h>

int isalphamin(int c)
{
	return (c >= 'a' && c <= 'z');
}

int isalphamay(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	c;
		int	i = -1;
		while(argv[1][++i])
		{
			if (isalphamin(argv[1][i]))
			{
				if ((argv[1][i] + 13) >= ('a' + 26))
					c = argv[1][i] - 13;
				else
					c = argv[1][i] + 13;
				write(1, &c, 1);			
			}
			else if (isalphamay(argv[1][i]))
			{
				if (argv[1][i] + 13 >= 'A' + 26)
					c = argv[1][i] -13;
				else
					c = argv[1][i] + 13;
				write(1, &c, 1);
			}
			else
				write(1, &(argv[1][i]), 1);
		}
	}
	return (0);
}
