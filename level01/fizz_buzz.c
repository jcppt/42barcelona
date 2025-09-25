#include <unistd.h>

void	to_ascii(int i)
{
	char	c;
	
	if ( i > 9)	
		to_ascii(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}


void	fizz_buzz(int i)
{

	i = 1;
	while( i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
           		write(1, "buzz", 1);
        	else if (i % 3 == 0)
            		write(1, "fizz", 4);
		else
			to_ascii(i);
		write(1, "\n", 1);
		i++;
	}
}

int	main()
{
	fizz_buzz(0);

	return (0);
}
