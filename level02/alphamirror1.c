#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] + 13 > 'z')
					argv[1][i] = argv[1][i] + ('z' - argv[1][i]);
			 	if (argv[1][i] + 13 < 'z')
					argv[1][i] = argv[1][i] + (2 * ('m' - argv[1][i]));
			}
			write(1, &(argv[1][i]), 1);
			i++;
		}
	
	}
}
	
	

