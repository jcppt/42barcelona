#include <unistd.h>
void	print(unsigned char octet)
{
	int	i = 7;
	unsigned char bit;
	unsigned char res;

	while (i >= 0)
	{
		bit = octet >> i & 1;
		res = bit + '0';
		write(1, &res, 1);
		i--;
	}
	write(1, "\n", 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 7;
	unsigned char bit = 0;
	unsigned char res = 0;	

	while (i >= 0)
	{

		bit = octet >> i & 1;
		res = bit | res;
		res = res << 1;
		i--;
	}
	return (res);
}

int	main()
{
	unsigned char bit = 42;
	unsigned char res = 0;
	
	print(bit);
	res = reverse_bits(bit);
	print(res);
	return (0);
}
