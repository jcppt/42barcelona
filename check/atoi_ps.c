/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juan Ceravalls <jceraval@student.42ba      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:47:44 by Juan Cera         #+#    #+#             */
/*   Updated: 2025/08/03 16:00:42 by jceraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	atoi_error(void)
{
	write(1, "atoi error\n", 11);
	exit(1);
}

int	clean(const char *nptr, int *sign)
{
	int	i;

	i = 0;
	while (nptr && (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r')))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

void	is_numeric(const char *nptr)
{
	int	i;
	int	is_digit;

	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			atoi_error ();
		is_digit = 1;
		i++;
	}
	if (!is_digit)
		atoi_error();
}

long	atoi_loop_conv(const char *nptr, int *i, int sign)
{
	long	res;

	res = 0;
	if (nptr[*i] < '0' || nptr[*i] > '9')
		atoi_error();
	while (nptr[*i] >= '0' && nptr [*i] <= '9')
	{
		res = (res * 10) + (nptr[*i] - '0');
		if ((sign == 1 && res > 2147483647) || (sign == -1 && res > 2147483648))
			atoi_error();
		(*i)++;
	}
	return (res);
}

int	atoi_ps(const char *nptr)
{
	long	res;
	int		i;
	int		sign;
	int		final_res;

	res = 0;
	sign = 1;
	i = 0;
	if (!nptr || nptr[i] == '\0')
		atoi_error();
	i = clean(nptr, &sign);
	is_numeric(nptr);
	res = atoi_loop_conv(nptr, &i, sign);
	if (nptr[i] != '\0')
		atoi_error();
	final_res = (int)(res * sign);
	return (final_res);
}
