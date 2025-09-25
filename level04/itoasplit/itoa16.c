#include <stdio.h>
#include <stdlib.h>


char	*ft_itoa(int nbr)
{
	int	i = 0;
	int	leng = 0;
	int	flag = 1;
	char	*res;	
	char	dig;
	int	resto;
	
	if (nbr < 0)
	{
		flag = -1;
		nbr = nbr * -1;
	}
	while ( nbr > 0)
	{
		nbr = nbr / 10;
		leng ++;
	}
	if (flag < 0)
		leng = leng + 1;
	leng = leng + 1;
	res = malloc(sizeof (int) * leng);
	if (!res)
		return (NULL);
	if (flag < 0)
	{
		res[0] = '-';
		i++;
	}
	while (nbr > 0)
	{
		resto = (nbr % 10);
		dig = resto + '0';
		res[leng] = dig;
		nbr = nbr / 10;
		leng--;
	}		 
	return (res);
}



int	main()
{
	int	val = -12;
	char	*res;

	printf("%d \n", val);
	res = ft_itoa(val);
	printf("%s \n", res);
}
