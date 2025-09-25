#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i = 0;
	while (str[i])
	{
		int	n = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			n = str[i] - 'a' + 1;
			while (n > 0)
			{
				write(1, &str[i], 1);
				n--;
			}
		}	
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			n = str[i] - 'A' + 1;
			while (n > 0)
			{
				write(1, &str[i], 1);
				n--;
			}	
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}		

	


int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);	
	write(1, "\n", 1);
	return (0);
}
