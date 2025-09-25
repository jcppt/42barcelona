#include <stdlib.h>

/*char	to_ascii(int nbr)
{
	char	dig;
	int	val = 0;

	if (nbr < 0)
		nbr = nbr * -1;
	if (nbr > 9)
		to_ascii(nbr / 10);
	val = nbr % 10;
	dig = val + '0';	
	return (dig);
}*/

char	*ft_itoa(int nbr)
{
	int	len = 0;
	char	*res;	
	int	i = 0;
	char	dig;
	int	num;

	if (nbr < 0)
		len++;
	num = nbr;
	while ((abs(num)) > 9)
	{
		num = num / 10;
		len++;
	}
	len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		free (NULL);
	res[len] = '\0';
	len--;
	if (nbr < 0)
	{
		res[i] = '-';
		nbr = nbr * -1;
		i++;
	}
	while (len >= i)
	{	
		dig = (nbr % 10) + '0';
		nbr = nbr / 10;
		res[len] = dig;
		len--;
	}
	return (res);
}

#include <stdio.h>
int	main()
{
	int	nbr = 123;
	char	*res;

	printf("%d\n", nbr);
	res = ft_itoa(nbr);
	printf("%s\n", res);
	return (0);
}
	
