#include "ft_list.h"
#include <stdio.h>

void	sort(int *tab, unsigned int size)
{
	int	temp = 0;
	unsigned int i = 0;
	unsigned int sizec;
	
	sizec = size;
	while ( size > 0)
	{	i = 0
		while ( i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
	i = 0;
	while (i < sizec)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}


int	main()
{
	int	a[5] = {4, 3, 5, 1, 2};
	int	argc = 5;

	sort(a, argc);
	return 0;
}
