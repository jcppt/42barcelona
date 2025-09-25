#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);			
			j++;
		}
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	res = 0;
	int	res2 = 0;

	if (argc == 3)
	{
		res = ft_strcspn(argv[1], argv[2]);
		res2 = strcspn(argv[1], argv[2]);
		printf("ft:  %d \n", res);
		printf("man:  %d \n", res2);
	}
	return (0);
}
