void	sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int	p = 0;
	int	temp = 0;	

	p = size;
	
	while (p > 0)
	{	
		i = 0;
		while (p > i)
		{
			if (tab[i] > tab [i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		p--;
	}
}

#include <stdio.h>
void	print(int *tab, int size)
{
	int i = 0;
	
	while ( i < size)
	{
		printf(" %d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main()
{
	int	tab[6] = {5, 4, 3, 2, 1, 0};
	int	size = 6;
	
	print(tab, 6);
	sort_int_tab(tab, size);
	print(tab, 6);
	return (0);
}
