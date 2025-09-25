#include <unistd.h>



void putnumber(int c)
{
	char	num;

	if (c >= 10)
		putnumber(c / 10);
	num = (c % 10) + '0';
	write(1, &num, 1);
}

int main(int argc, char **argv)
{
	int	c = 0;
	(void)		argv;

	c = argc - 1;
	putnumber(c);
	write(1, "\n", 1);
	return (0);
}

