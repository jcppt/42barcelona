#include <unistd.h>

int	to_int(char *str)
{
	int	i = 0;
	int	dig = 0;
	int	res = 0;

	while (str[i])
	{
		dig = str[i] - '0';
		res = (res * 10) + dig;
		i++;
	}
	return (res);
}

void	to_hex(int val)
{
	char	dig;
	
	if (val > 16)
		to_hex( val / 16);
	val = val % 16;
	if (val >= 0 && val <= 9)
		dig = val + '0';
	else if (val >= 10 && val <= 16)
		dig = val - 10 + 'a';
	write(1, &dig, 1);
}

int main( int argc, char **argv)
{
	int	val = 0;	



	if(argc == 2)
	{
		val = to_int(argv[1]);
		to_hex(val);
	}
	write(1, "\n", 1);
	return(0);
}
