#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i = 7;
	unsigned int	bit;
	unsigned int	res;
	
	write(1, "\"", 1);
	while (i >= 0)
	{
		bit = octet >> i & 1;
		res = bit + '0';
		write(1, &res, 1);
		i--;
	}	
	write(1, "\"", 1);
	write(1, "\n", 1);
}

int	main()
{
	unsigned int    octet = 2;
	print_bits(octet);
	return (0);
}





