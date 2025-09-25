#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 1;

	while (argc  >  i)
	{
		int	j = 0;
		while (argv[i][j] < 33)
			j++;			
		while (argv[i][j])
		{
 			if ((argv[i][j - 1]) > 32 && (argv[i][j]) > 32)
 				 write(1, &(argv[i][j]), 1);
 			if ((argv[i][j - 1]) < 33 && (argv[i][j]) > 32)
 				 write(1, &(argv[i][j]), 1);
 			if ((argv[i][j - 1]) > 32 && (argv[i][j]) < 33)
 				 write(1, &(argv[i][j]), 1);
                 	j++;
		}
		 write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

