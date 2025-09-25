#include <unistd.h>
#include <stdio.h>

void	rev(char *str)
{
	int	i = 0;
	int	w = 0;

	while (str[i])
		i++;
	i--;
	while(i >= 0)
	{
		if (str[i] > 32)
		{
			while (str[i] > 32)
				i--;
			w = 1;
			while (str[i + w] > 32)
			{ 
				write(1, &(str[i + w]), 1);
				w++;
			}
			if (i > 0)
				write(1, " ", 1);
		}
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev(argv[1]);
	write(1, "\0", 1);
	return (0);
}
