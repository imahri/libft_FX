/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:12:43 by imahri            #+#    #+#             */
/*   Updated: 2022/10/26 18:10:50 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	*ptr;

	ss = (char *)s;
	ptr = 0;
	if (c == 0)
		ptr = ss;
	while (*ss)
	{
		if (*ss == (char)c)
			ptr = ss;
		ss++;
	}
	if (*ss == (char) c)
		ptr = ss;
	return (ptr);
}
