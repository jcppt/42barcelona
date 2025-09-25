
int	max(int* tab, unsigned int len)
{
	unsigned int	i = 1;
	int	comp = 0;
	int	max = 0;

	while (i < len)
	{
		if (tab[i - 1] > tab[i])
			comp = tab[i - 1];
		else 
			comp = tab[i];
		if (comp > max)
			max = comp;
		i++;
	}
	return (max);
}

#include <stdio.h>

int	main()
{
	int	res = 0;	

	int tab[5] = {1,2,3,4,5};
	
	res = max(tab, 5);
	printf("%d", res);
	return (0);
}
