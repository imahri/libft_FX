/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:11:52 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 21:47:05 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else
		{
			nb *= -1;
			ft_putchar_fd('-', fd);
		}
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	if (nb >= 10)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
}
