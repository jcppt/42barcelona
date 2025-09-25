#include <stdio.h>
#include <stdlib.h>

int	nbrlong(long cpy)
{
	int	leng = 0;

	if (cpy == 0)
		return (1);
	while (cpy > 0)
	{
		cpy = cpy / 10;
		leng++;
	}
	return (leng);
}


char	*ft_itoa(int nbr)
{
	long	cpy;
	int	flag = 0;
	int	leng = 0;	
	char	*res;
	char dig;

	cpy = nbr;
	if (cpy < 0)
	{
		cpy = -cpy;
		flag = 1;
	}
	leng = nbrlong(cpy);
	leng = leng + flag;
	res = malloc(sizeof (char) * leng + 1);
	res[leng] = '\0';
	leng--;
	if (nbr < 0)
		res[0] = '-';
	while (leng >= flag)
	{
		dig = (cpy % 10) + '0';
		cpy = cpy / 10;
		res[leng] = dig;
		leng--;
	}
	return (res);
}

int	main()
{
	int	i = 0;
	int nbr = 0;
	char *res;
	
	printf("%d\n", nbr);
	res = ft_itoa(nbr);
	while (res[i])
	{
		printf("%c", res[i]);
		i++;
	}
	return (0);
}
