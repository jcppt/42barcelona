#include <unistd.h>
#include <stdio.h>

int	is_prime(int val)
{
	long	i = 3;
	
	if ( val <= 1)
		return (0);
	if ( val == 2)
		return (1);
	if (val % 2 == 0)
		return (0);
	while ( i * i <= val)
	{
		if (val % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void	put_number(int r)
{
	char	num;
	int	v = 0;
	
	if (r > 9)
		put_number(r / 10);
	v = r % 10;
	num = v + '0';
	write(1, &num, 1);
}	

void	primo_inferior(int res)
{
	int	sum = 0;
	
	while (res > 0)
	{
		if (is_prime(res) == 1)
			sum = sum + res;
		res--;
	}
	put_number(sum);
}

int	main(int argc, char **argv)
{
	int	val = 0;
	int	i = 0;
	int	res = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{			
			val = (argv[1][i]) - '0';
			res = (res * 10) + val;
			i++;
		}
	}
	primo_inferior(res);
	return (0);
}		
