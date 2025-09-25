#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	val = 0;
	int i = 2;

	if (argc == 2)
	{
		val = atoi(argv[1]);

		while (val >= i)
		{
			if ( val % i == 0)
			{
				printf("%d", i);
				val = val / i;
				if ( val > i)
					printf("*");
			}
			i++;
		}
	}
	printf("\n");
}
