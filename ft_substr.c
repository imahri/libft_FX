/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:28:40 by imahri            #+#    #+#             */
/*   Updated: 2022/10/26 18:49:22 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (n >= ft_strlen(&s[start]))
		n = ft_strlen(&s[start]);
	p = malloc (sizeof(char) * (n + 1));
	if (!p)
		return (NULL);
	while (i < n)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = 0;
	return (p);
}
