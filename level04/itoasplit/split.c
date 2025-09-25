#include <unistd.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int i = 0;
	int wc = 0;
	int	flag = 0;

	while (str[i])
	{
		if (str[i] > 32)
			if (flag == 0)
			{
				flag = 1;	
				wc++;
			}
		if (str[i] < 33)
			flag = 0;
		i++;
	}
	return (wc);
}		

int	word_len(char *str, int *i)
{
	int	wlen = 0;

	while (str[*i] && str[*i] < 33)
		(*i)++;
	while (str[*i] && str[*i] > 32)
 	{
		wlen++;
		(*i)++;
	}	
	return (wlen);
}

char	**free_all(char **res, int wc)
{
	int	i = 0;
	
	while ( i < wc)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

int	fill_word(char *str, char **res, int wc)
{
	int	a = 0;
	int	b = 0;
	int	i = 0;
	int	start_pos = 0;
	int	wleng = 0;
	
	while (a < wc)
	{
		wleng = word_len(str, &i);
		res[a] = malloc(sizeof(char) * (wleng + 1));
		if (!res[a])
		{
			free_all(res , a);
			return (0);
		}
		start_pos = i - wleng;
		b = 0;
		while (b < wleng)
		{
			res[a][b] = str[start_pos + b];
			b++;
		}
		res[a][b] = '\0';
		a++;
	}
	return (1);
}
		
char    **ft_split(char *str)
{
	int	wc = 0;
	char 	**res;

	wc = word_count(str);
	res = malloc(sizeof(char*) * (wc + 1));
	if (!res)
		return (NULL);
	if (fill_word(str, res, wc) == 0)
		return (NULL);
	res[wc] = NULL;
	return (res);
}

#include <stdio.h>
int	main()
{
	char	s[] = {"esto es una prueba"};
	char	c;
	char	**res;
	int		i;

	i = 0;
	c = ' ';
	printf("arrai original: %s\n", s);
	res = ft_split(s);
	while (res [i])
	{
		printf("  %s  \n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
		
