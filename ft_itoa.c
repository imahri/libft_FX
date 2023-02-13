/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:20:50 by imahri            #+#    #+#             */
/*   Updated: 2022/10/26 21:04:51 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	size_int(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = size_int(n);
	str = ft_calloc(sizeof(char), i + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	i--;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
