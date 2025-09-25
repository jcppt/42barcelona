#include <stdio.h>

int	prime(int c)
{
    int i = 2;

    while (i * i <= c)
            i++;
    while (i >= 1)
    {
        if (c % i == 0)
        	return (i);	
        i--;
    }
    return (i);
}

int	main()
{
	int i = 87;
	int res;

	res = prime(i);
	printf("el numero :%d", res);
}
