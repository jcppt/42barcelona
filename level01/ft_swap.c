#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main()
{
	int	Y=11;
	int	Z=33;

	printf("%d %d\n", Y, Z);
	ft_swap(&Y, &Z);
	printf("%d %d\n", Y, Z);
	
}
*/
