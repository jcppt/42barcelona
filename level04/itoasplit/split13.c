
#include <stdlib.h>

int	word(char *str)
{
	int	i = 0;
	int	wc = 0;
	int	flag = 0;

	while (str[i])
	{
		if (str[i] > 32 && flag == 0)
		{
			flag = 1;
			wc++;
		}
		else if (str[i] < 33)
			flag = 0;
		i++;
	}
	return (wc);
}

void	freesplit(char **split, int count)
{
	int i = 0;
	
	if (!split)
		return ;
	while (i < count)
	{
		if (split[i])
			free (split[i]);
		i++;
	}
	free (split);
} 

char	**ft_split(char *str)
{
	int	i = 0;
	int	wc = 0;
	int	wl = 0;
	int	p = 0;
	char	**res;

	wc = word(str);
	res = malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	wc = 0;
	while (str[i])
	{
		if (str[i] > 32)
		{
			wl = 0;
			while (str[i + wl] > 32)
				wl++;
			res[wc] = malloc(sizeof(char) * wl + 1);
			if (!res[wc])
			{
				freesplit(res, wc);
        			return (NULL);
        		}
			p = 0;
			while (p < wl)
			{
				res[wc][p] = str[i];
				p++;
				i++;
			}
			res[wc][p] = '\0';
			wc++;
		}
		else
			i++;
	}
	res[wc] = (NULL);
	return (res);
}

#include <stdio.h>

int	main()
{
	char	*str;
	char	**res;
	
	str = "esto ees una prueba";
	printf("%s \n", str);
	res = ft_split(str);
	int	i = 0;
	while (res[i])
	{
		printf("%s \n", res[i]);
		free (res[i]);
		i++;
	}
	free (res);
	return (0);
}
	
