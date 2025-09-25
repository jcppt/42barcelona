#include <unistd.h>

void	alpha(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + 13 > 'z')
				str[i] = ('a' + ('z'- str[i])); 
			else if (str[i] + 13 <= 'z')
				str[i] = ( str[i] + 1 + (2 * ('m' - str[i])));
		}
		write(1, &str[i], 1);
		i++;
	}
} 



int	main (int argc, char **argv)
{
	if (argc == 2)
		alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
