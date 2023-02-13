/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:19:45 by imahri            #+#    #+#             */
/*   Updated: 2022/10/26 19:43:37 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	n;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1);
	while (j >= 0)
	{
		if (ft_strchr(set, s1[j]) == NULL)
			break ;
		j--;
	}
	n = (j - i) + 1;
	return (ft_substr(s1, i, n));
}
