#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	res = 0;
	int	flag = 1;
	int	val = 0;

	while (str[i] < 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag  = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			val = str[i] - '0';
 		else if (str[i] >= 'a' && str[i] <= 'f')
			val = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'A')
           		 val = str[i] - 'A' + 10;
		else
			return (1);
		res = (res * str_base) + val;
		i++;
	}
	return (flag * res);
}

int main()
{
	int	base = 4;
	char *val = "222";
	int	res = 0;
	
	printf("%s\n", val);
	res = ft_atoi_base(val, base);
	printf("%d\n", res);
	return(0);
}






