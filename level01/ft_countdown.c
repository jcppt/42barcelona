#include <unistd.h>
int	main ()
{
	int i = 0;
	char c;
	
	while (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	i = 9;
	while (i >= 0)
	{
		c = i + '0';
		write(1, &c, 1);
		i--;
	}		
	return (0);
}

