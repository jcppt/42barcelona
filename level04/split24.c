#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	num_words(char *str)
{
	int	i = 0;
	int	nw = 0;

	while (str[i])
	{
		while (str[i] > 5 && str[i] < 33)
			i++;
		if (str[i] > 32)
		{
			nw++;
			while (str[i] > 32)
            			i++;
		}
	}
	return (nw);
}

char	**free_all(char **res, int nw)
{
	while (nw >= 0)
	{
		free (res[nw]);
		nw--;
	}
	free (res);
	return (NULL);
}

char    **ft_split(char *str)
{
	int	i = 0;
	int	nw = 0;
	int	wlong = 0;
	char **res;	
	int	w = 0;
	int l = 0;

	nw = num_words(str);
	res = malloc(sizeof(char *) * (nw + 1));
	if (!res)
		return (NULL);
	while (nw > 0)
	{
		wlong = 0;
		l = 0;
		while (str[i] > 5 && str[i] < 33)
		    i++;
		while (str[i + wlong] > 32)
		    wlong++;
		res[w] = malloc(sizeof(char) * (wlong + 1));
		if (!res[w])
			free_all(res, nw);
		while (wlong > 0)
		{
			res[w][l] = str[i];
			i++;
			l++;
			wlong--;
		}
		res[w][l] = '\0';
		nw--;
		w++;
	}
	res[w] = NULL;
	return (res) ;
}

int	main()
{
	char	*str = " aa bb cc";
	int	i = 0;
	char **res;

	printf("%s\n", str);
	res = ft_split(str);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
