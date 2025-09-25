
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	tmp;

	while (i < size)
	{
		
		while (i < size - 1)	
		{
			if	(tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
		size--;
	}
}

int	print_str(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	
	while ( i < size)
	{
		printf("%d ,", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}

int	main()
{
	unsigned int	size = 5;
	int	tab[5] = {4, 5, 3, 1, 2};
	
	print_str(tab, size);
	sort_int_tab(tab, size);
	print_str(tab, size);
}
