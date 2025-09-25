#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a = 0;
	int	b = 0;
	int	l = 0;
	
	if (argc == 3)
	{
		while (argv[1][l])
		l++;	
		while (argv[1][a] != '\0')
		{
			while (argv[2][b] != '\0')
			{
				if (argv[1][a] == argv[2][b])	
				{
					a++;
					if ( a == l)
					{
						write(1, "1", 1);
						return (0);
					}
				}
			b++;
			}
		break;
		}
		write(1, "0",1);
		return (0);
	}
	write(1, "\n",1);
	return (0);
}
