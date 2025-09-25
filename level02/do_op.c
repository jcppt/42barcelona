#include <unistd.h>
#include <stdlib.h>

void	itoa (int res)
{
	char	digit;
	
	if (res < 0)
		res = res * -1;
	if (res > 9)
		itoa(res/10);
	digit = (res % 10) + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] != '*' || argv[2][0] != '-' || argv[2][0] != '+' || argv[2][0] != '/')
		{
			int val1 = atoi(&argv[1][0]);
			int val2 = atoi(&argv[3][0]);
			int	res = 0;

			if (argv[2][0] == '*')
				res = val1 * val2;
			else if (argv[2][0] == '/')
                		res = val1 / val2;
			else if (argv[2][0] == '+')
                		res = val1 + val2;
            		else if (argv[2][0] == '-')
                		res = val1 - val2;
                	if (res < 0)
                		write(1, "-", 1);
                	
			itoa(res);
		}
	}
	write(1, "\n", 1);
	return (0);
}
