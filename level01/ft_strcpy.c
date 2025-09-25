#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i = 0;

	if (!s2)
		return (NULL);
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main()
{
	char *s2 = "hola";
	char s1[10];

	printf("original %s\n", s2);
	ft_strcpy(s1, s2);
	printf("copia %s\n", s1);
	return (0);
}
*/
	
