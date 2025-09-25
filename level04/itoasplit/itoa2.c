#include <stdlib.h>
#include <unistd.h>

char	*ft_itoa(int nbr)
{
	int	i = 0;
	int	dig = 0;
	int	len = 0;
	int 	cal = 0;
	char	*res;	

	cal = nbr;
	if (cal < 0)
		len++;	
	while (abs(cal) > 9)
	{
		cal = cal / 10;
		len++;
	}
	len++;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len--;
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = nbr * -1;
		i++;
	}
	while (i <= len)
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

	int	nbr = -123;
	char	*res;

	printf("%d\n", nbr);
	res = ft_itoa(nbr);
	printf("%s\n", res);
	return (0);
}
