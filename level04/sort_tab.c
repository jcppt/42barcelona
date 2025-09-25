#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	len = 0;
	int	temp = 0;
	
	len = size - 1;

	while (len > 0)
	{	
		i = 0;
		while (size - 1 > i)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		len--;
	}
}

int	main()
{
	int	str[9] = {5, 9, 5, 7, 10, 35, 1, 2, 0};
	int	size = 9;
	int i = 0;

	while (i < size)
	{
		printf("%d  ", str[i]);
		i++;
	}
	printf("\n");
	sort_int_tab(str, size);
	i = 0;
	while (i < size)
	{
		printf("%d  ", str[i]);
		i++;
	}
	return (0);
}		
