#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;

	while (s1[i])
	{
		int	p = 0;
		while (s2[p])
		{
			if (s1[i] == s2[p])
				return ((char *)s1 + i);
			p++;
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*man;
	if (argc == 3)
	{
		printf("original : %s, buscamos: %s\n", argv[1], argv[2]);
		str = ft_strpbrk(argv[1], argv[2]);
		man = strpbrk(argv[1], argv[2]);
		printf("resultado: %s\n", str);
		printf("man: %s\n", man);
	}
	return (0);
}

