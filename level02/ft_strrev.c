#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	temp;

	while (str[len])
		len++;
	len--;
	while ((len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int main(int argc, char **argv)
{
	char	*res;	

	if (argc == 2)
	{
		printf("%s\n", argv[1]);
		res = ft_strrev(argv[1]);
		printf("%s\n", res);
	}
	return (0);
}
