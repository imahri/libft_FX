/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:47:00 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 03:43:58 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	overf(int n, int pre, int sign)
{
	if (n / 10 > pre)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;
	int	pre;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		pre = res;
		res = str[i] - '0' + (res * 10);
		if (overf(res, pre, sign) != 1)
			return (overf(res, pre, sign));
		i++;
	}
	return (res * sign);
}
