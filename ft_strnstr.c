/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:30:33 by imahri            #+#    #+#             */
/*   Updated: 2022/10/27 21:56:41 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	if (nb == 0)
		return (NULL);
	j = ft_strlen(s2);
	while (s1[i] != '\0' && i + j <= nb)
	{
		if (ft_strncmp(&s1[i], s2, j) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
