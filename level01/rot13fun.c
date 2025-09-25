#include <unistd.h>

int isalphamin(int c)
{
	return (c >= 'a' && c <= 'z');
}

int isalphamay(int c)
{
	return (c >= 'A' && c <= 'Z');
}

void	rotone(char *str)
{
	int	i = -1;
	while(str[++i])
	if (isalphamin(str[i]))
	{
		if (str[i] == 'z')
			str[i] = 'a';
		else 
			str[i] = str[i]+1;				
	}
	else if (isalphamay(str[i]))
	{
		if (str[i] == 'Z')
			str[i] = 'A';
		else 
			str[i] = str[i]+1;
	}
	write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	int	a;
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}











