/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:52:09 by imahri            #+#    #+#             */
/*   Updated: 2022/10/29 08:09:42 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*tmp;
	size_t	tsize;
	size_t	i;

	i = 0;
	tsize = count * n;
	if (n != 0 && count != tsize / n)
		return (NULL);
	tmp = malloc(tsize);
	if (!tmp)
		return (0);
	while (i < tsize)
	{
		((char *)tmp)[i] = '\0';
		i++;
	}
	return (tmp);
}
