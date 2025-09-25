#include <unistd.h>

void	rodstring(char *str)
{
	int	i = 0;

	while (str[i] == 32 || str[i] == 9)
		i++;
	while (!(str[i] == 32 || str[i] == 9))
    		i++;
    	i++;
	while (str[i])
	{
		if (!(str[i] == 32 || str[i] == 9))
			write(1, &str[i], 1);
		if ((!(str[i - 1] == 32 || str[i - 1] == 9)) && (str[i] == 32 || str[i] == 9))
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (!(str[i] == 32 || str[i] == 9))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rodstring(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

