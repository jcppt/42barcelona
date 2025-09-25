int	ft_atoi(const char *str)
{
	int	i = 0;
	int	flag = 0;
	int	val = 0;
	int	dig = 0;

	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')	
			flag = -1;
		i++;
	}
	while (str[i])
	{
		dig = str[i] - '0';
		val = (val * 10) + dig;
		i++;
	}
	return (flag * val);
}


#include <stdio.h>
int	main()
{
	char *str = "-3217";
	int	res = 0;

	res = ft_atoi(str);
	printf("resultado : %d", res);
	return (0);
}
