#include <unistd.h>

int	space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' && argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if ((argv[1][i]) != space(argv[1][i]) && (argv[1][i + 1])!= space(argv[1][i + 1]))
				write(1, &(argv[1][i]), 1);
			if ((argv[1][i]) != space(argv[1][i]) && (argv[1][i + 1]) == '\0')
				write(1, &(argv[1][i]), 1);	
			else if ((argv[1][i]) == space(argv[1][i]) && (argv[1][i + 1])!= space(argv[1][i + 1]))
			{
				write(1, "   ", 3);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
					
