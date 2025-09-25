#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int	is_space(char c)
{
	if ((c >= 7 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	word_count(char *str)
{
	int	i = 0;
	int	wc = 0;

	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
    		if (str[i] && !is_space(str[i]))
		{
			wc++; 	
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (wc);
}

int	word_long(char *str)
{
	int	w_long = 0;
	
	while (str[w_long] && !(is_space(str[w_long])))
		w_long++;
	return (w_long);
}

char	*ft_strdup(char *str)
{
	int	len = 0;
	char	*dest;
	int	i = 0;
	
	len = word_long(str);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if(!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
	
char	**ft_split(char *str)
{
 	int i = 0;
    	int wc = 0;
	char	**result;
	int word_index = 0;

	if (!str)
		return (NULL);
	wc = word_count(str);
	result = (char **)(malloc(sizeof(char *) * (wc + 1)));
	if (!result)
		return (NULL);
	while (str[i] && word_index < wc)
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			result[word_index] = ft_strdup(&str[i]);
			word_index++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	result[word_index] = NULL;
	return (result);
}

int	main()
{
	char	*result = "se es se";
	char	**res;
	int	i = 0;	
	

	res = ft_split(result);
	if(!res)
		return (1);
	while (res[i])
	{
		printf("%s, \n", res[i]);
		i++;
	}			
	write(1, "\n", 1);
	return (0);
}
