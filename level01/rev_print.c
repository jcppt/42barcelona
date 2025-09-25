#include <unistd.h>

void	rev_print(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\0", 1);
	return(0);
}	
