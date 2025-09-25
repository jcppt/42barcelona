#include <unistd.h>

void	printarg(int a)
{
	char dig;
	
	if (a > 9)
		printarg(a / 10);
	dig = (a % 10) + '0';
	write(1, &dig, 1);
}
		
int	main(int argc, char **argv)
{
	(void) argv;
	
	if (argc == 1)
		write(1, "0", 1);
	else
	{
		argc = argc - 1;
		printarg(argc);
	}
	write(1, "\n", 1);
	return (0);
}
