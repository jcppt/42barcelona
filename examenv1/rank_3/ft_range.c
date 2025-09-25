#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	size = 0;
	int	i = 0;
	int	*array;	

	size = end - start + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = start + i;
		i++;
	}
	return (array);
}

#include <stdio.h>

int	main()
{
	int	start = -5;
	int	end = 3;
	int	size = end - start + 1;
	int	i = 0;
	int	*val;
	
	val = ft_range(start, end);
	while (i < size)
	{
		printf("%d   ", val[i]);
		i++;
	}
	free (val);
	return (0);
}

	
