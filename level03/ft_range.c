#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*res; 
	int	dif = 0;
	int i = 0;
	
	if ( end >= start)
		dif = end - start + 1;
	else if (end < start)
		dif = start - end + 1;
	res = (malloc(sizeof(int) * dif));
	if (!res)
		return (NULL);
	while (dif >= i)
	{
		if (end >= start) 
			res[i] = start + i;
		if (end < start)
			res[i] = start + (i * -1);
		i++;
	}
	return (res);
}

int	main()
{
	int	start = 1;
	int	end = -3;
	int	*res;
	int	dif = 0;
	int	i = 0;

	if ( end >= start)
        	dif = end - start + 1;
    	else if (end < start)
        	dif = start - end + 1;
	res = ft_range(start, end);
	while (i < dif)
	{
		if ( end >= start)
        		res[i] = start + i;
    		else 
    			res[i] = start + (i * -1);
    		printf("%d\n", res[i]);
		i++;
	}
	free (res);
	return (0);
}
	
