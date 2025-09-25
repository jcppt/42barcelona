#include <stdio.h>
#include <stdlib.h>

void	f_all(char **res, int cpywc)
{
	if (!res)
		return ;
	while (cpywc >= 0)
	{
		if (res[cpywc])
			free (res[cpywc]);
		cpywc--;
	}
}

int	ft_wc(char *str)
{
	int	i = 0;
	int	wc = 0;

	while (str[i])
	{
		while (str[i] && (str[i] > 5 && str[i] < 33))
			i++;
		if (str[i] && (str[i] > 32))
			wc++;
		while (str[i] && (str[i] > 32))
            		i++;
	}
	return (wc);
}

int	ft_wl(char **res, char *str, int i, int cpywc)
{
	int	wlen = 0;
	int	cpyc = 0;

	while (str[i + wlen] && str[i+ wlen] > 32)
		wlen++;
	res[cpywc] = malloc(sizeof (char) * (wlen + 1));
	if (!res)
		f_all(res, cpywc);  
	while ( wlen > cpyc)
	{		
		res[cpywc][cpyc] = str[i + cpyc];
		cpyc++;
	}
	res[cpywc][cpyc] = '\0';
	return (i + cpyc);
}



char	**ft_split(char *str)
{
	int	i = 0;
	int	wc = 0;
	char **res;
	int	cpywc = 0;

	wc = ft_wc(str);
	res = malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	while (str[i] && wc > cpywc)
	{
		if (str[i] > 32)
		{
			i = ft_wl(res, str, i, cpywc);
			cpywc++;
		}
		else
			i++;
	}
	res[cpywc] = (NULL);
	return (res);
}

int	main()
{
	char *str = "a aa aa";
	char	**res;
	int	i = 0;

	printf("%s \n", str);
	res = ft_split(str);
	while (res[i])
	{
		printf("%s \n", res[i]);
		free(res[i]);
		i++;
	}
	free (res);
	return (0);
}
	
