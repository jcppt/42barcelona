int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	flag = 1;
	int	dig = 0;
	int	res = 0;
	
	if (str[i] == '-')
	{	
		flag = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			dig = (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			dig = (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'F')
            dig = (str[i] - 'A' + 10);
		res = (res * str_base) + dig;
		i++;
	}	
	return (res * flag);
}

#include <stdio.h>

int	main()
{
	char *str = "42";
	int	base = 4;
	int	res = 0;

	printf("%s \n", str);
	res = ft_atoi_base(str, base);
	printf("%d \n", res);
	return (0);
} 
