#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	dif = 0;
	int	i = 0;
	int	*res;

	if (start >= end)
		dif = start - end + 1;
	else
		dif = end - start + 1;
	res = malloc(sizeof (char) * dif);
	if (!res)
		return (NULL);
	while ( i < dif)
	{
		if (start >= end)
			res[i] = end + i;
		else
			res[i] = end + (i * -1);
		i++;
	}
	return (res);
}


#include <stdio.h>
int	main()
{
	int	start = -1;
	int	end = 2;
	int	*res;
	int	i = 0;
	int	dif = 0;	

	res = ft_rrange(start, end);
	if (start >= end)
        	dif = start - end + 1;
    	else
        	dif = end - start + 1;
	while ( i < dif)
	{
		printf("%d.\n", res[i]);
		i++;
	}
	return (0);
}


