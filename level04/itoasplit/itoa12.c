#include <stdlib.h>


char	*ft_itoa(int nbr)
{
	int	i = 0;
	int	flag = 0;
	char *res;
	int	cpynbr;
	char	dig;

	cpynbr = nbr;
	if (cpynbr < 0)
	{
		flag = -1;
		i++;
	}
	while (cpynbr > 9)	
	{
		cpynbr = cpynbr / 10;
		i++;
	}
	i++;
	res = malloc(sizeof (char) * (i + 1));
	if (!res)
		free (res);
	if (flag == -1)
		res [0] = '-';
	res[i] = '\0';
	i--;
	while (nbr > 0)
	{
		dig = (nbr % 10) + '0';
		nbr = nbr / 10;
		res[i] = dig;
		i--;
	}
	return (res);
}

#include <stdio.h>
int	main()
{
	int	val = 123;
	char *res;

	printf("%d \n", val);
	res = ft_itoa(val);
	printf("%s, \n", res);
	return (0);
}

	
