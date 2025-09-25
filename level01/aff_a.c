#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a = 0;
	int	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a' || argv[1][i] == 'A')
				a = a + 1;
			i++;
		}
		if (a == 0)
            		write(1, "\n", 1);
		else if (a == 1)
			write(1, "a", 1);
		else if (a >= 2)
		{
			write(1, "a", 1);
			write(1, "\n", 1);
		}
		return (0);
	}
}
