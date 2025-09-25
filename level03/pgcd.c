#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	a = 0;
	int b = 0;
	int i = 2;
	int	ra = 0;
	int	rb = 0;
	int	max = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a == 0 || b == 0)
		{
			printf("0");
			return (0);
		}
		while (i <= a || i <= b)
		{
			ra = (a % i);
			rb = (b % i);
			if (ra == 0 && rb == 0)
				if (max < i)
					max = i;
			i++;
		}
		printf("%d", max);
	}
	printf("\n");
	return (0);
}

