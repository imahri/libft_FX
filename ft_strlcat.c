/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:34:23 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 20:17:16 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (!dst && !n)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= n)
		return (n + src_len);
	j = dst_len;
	i = 0;
	while (src[i] && i < n - dst_len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (src_len + dst_len);
}
