#include <unistd.h>

int numero(int i)
{
	char	num;	
	int	res;
	if (i > 9)
		numero(i/10);
	res = i % 10;
	num = res + '0';
	write(1, &num, 1);
	return (0);
}

int main()
{
	int	num = 2000;
	
	numero(num);
	return (0);
}
