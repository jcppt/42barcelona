#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0;
	int	num = 0;
	int	i = 0;
	int	flag = 1;

	if  (str[i] == '-' || str[i] == '+')
	{
		flag = -1;
		i++;
	}
	while (str[i])
	{
			printf(" char %c \n", str[i]);
			if (str[i] >= 'a' && str[i] <= 'z')
				num  = 10 + (str[i] - 'a');
			else if (str[i] >= 'A' && str[i] <= 'Z')
               			num  = 10 + (str[i] - 'A');
			else if	(str[i] >= '0' && str[i] <= '9')
				num = str[i] - '0';
			if (num < str_base)
			{
				res = (res * str_base) + num;
				printf(" res %d num %d\n", res, num);
			}
			i++;
	}
	return (flag * res);
}



int	main()
{
	char	*str = "1111";
	int	base = 2;
	int	result = 0;
	
	result = ft_atoi_base(str, base);
	printf("el str %s, base %d, base 10 %d\n", str, base, result);
	return (0);
}
				
					
	
