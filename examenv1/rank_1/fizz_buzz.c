#include <unistd.h>

void	put_number(int i)
{
	char	num;
	
	if (i > 9)
		put_number(i / 10);
	num = (i % 10) + '0';
	write(1, &num, 1);	
}

int	main()
{
	int	i = 1;
	
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 10);
		else if (i % 5 == 0)
			write(1, "fizz\n", 5);
		else if (i % 3 == 0)
			write(1, "buzz\n", 5);
		else
		{ 
			put_number(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
		
	

