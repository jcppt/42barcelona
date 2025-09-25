#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	last;
	
	last = argc -1;
	while (argv[last][i])
	{
		write(1, &(argv[last][i]), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

 		
