#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *charset)
{
	int	i = 0;
	int	j;
	int	flag = 0;

	while (s[i])
	{
		flag = 0;
		j = 0;
		while (charset [j])
		{
			if (charset[j] == s[i])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			break;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	res = 0;
	int	man	= 0;

	if (argc ==  3)
	{
		res = ft_strspn(argv[1], argv[2]);
		man = strspn(argv[1], argv[2]);
		printf("man %d, fun %d, \n", man, res);
	}
	return (0);
}
