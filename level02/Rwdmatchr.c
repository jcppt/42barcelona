#include <unistd.h>

void	wdmatch(char *str1, char *str2)
{
	int	i = 0;
	int	j = 0;
	int	len = 0;
	
	while (str1[len])
		len++;
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j])
				break ;
			j++;
			if (!str2[j])
				return ;
		}
		i++;		
	}
	write(1, str1, len);
	
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}	
