#include <unistd.h>

void	expand_str(char *str)
{
	int	i = 0;

	while (str[i] < 33)
		i++;
	while (str[i])
	{
		if (str[i] > 32 && str[i - 1] > 32)
			write (1, &str[i], 1); 
		if (str[i] > 32 && str[i - 1] < 33)
                {
			write (1, "   ", 3);        
			write (1, &str[i] , 1); 
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
