#include <unistd.h>

void inter(char *str1, char *str2)
{
	int	i = 0;
	int	j = 0;
	int	ascii = 0;
	int	comp[256] = {};

	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				ascii = str1[i];
				if (comp[ascii] == 0)
					write(1, &(str1[i]), 1);
				comp[ascii] = 1;
				break;
			}
			j++;
		}
		i++;
	}
	i++;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
	
