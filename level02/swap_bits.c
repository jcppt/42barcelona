#include <unistd.h>
void	print(unsigned char octet)
{
	unsigned char dig;
	unsigned char res;
	int	i = 7;

	while ( i >= 0)
	{
		dig = octet >> i & 1;
		res = dig + '0';
		write(1, &res, 1);
		i--;
	}
	write(1, "\n", 1);
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char res = 0;

	res = octet >> 4 | res;
	res = octet << 4 | res;
	return (res);
}

int main()
{
	unsigned char octet = 135;
	unsigned char res = 0;
	
	print(octet);
	res = swap_bits(octet);
	print(res);
	return (0);
}



