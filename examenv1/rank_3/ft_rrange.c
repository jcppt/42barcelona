#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int 	i = 0;
	int	size = 0;
	int	*str;

	size = (start - end + 1);
	str = malloc(sizeof(int) * size);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = (end + i);
		i++;
	}
	return (str);
}

int	main()
{
	int	start = 0;
	int	end = 0;
	int	*str;
	int	i = 0;
	int	size = 0;
	
	size = start - end + 1;

	str = ft_rrange(start, end);
	while (i < size)
	{
		printf(" %d  ", str[i]);
		i++;
	}
	free (str);
	return (0);
}
	
