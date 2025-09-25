#include <stdio.h>
#include <stdlib.h>


char *strdup(const char *s)
{
	int	i = 0;
	char	*res;

	while (s[i])
		i++;
	res = malloc(sizeof (char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(int argc, char **argv)
{
	char	*res;

	if (argc == 2)
	{
		printf(" %s ,\n", argv[1]);
		res = strdup(argv[1]);
		printf(" %s ,\n", res);
	}
	return (0);
}
