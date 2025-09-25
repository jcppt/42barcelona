#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	res = 0;
	if (argc == 3)
	{
		res = ft_strcmp(argv[1], argv[2]);
	}
	printf("res : %d\n", res);
	return (0);
}
