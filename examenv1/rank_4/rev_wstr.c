#include <unistd.h>

void	rev_wstr(char *str)
{
	int i = 0;
	int	beg = 0;
	int end = 0;

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == 32 || str[i] == 9))
			i--;
		end = i;
		while (i >= 0 && !(str[i] == 32 || str[i] == 9))
			i--;
		beg = i;
		i = 0;
		while (str[i])
		{
			if (i >= beg + 1 && i <= end)
				write(1, &str[i], 1);
			i++;
		}
		i = beg;
		write(1, " ", 1);
		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
