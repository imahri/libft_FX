/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:42:03 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 20:03:02 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_word(char const *s, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == sep)
			i++;
		if (s[i] != sep && s[i])
			count++;
		while (s[i] != sep && s[i])
			i++;
	}
	return (count);
}

static	char	*ft_count_word_size(char const *s, char sep)
{
	int		i;
	char	*str;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != sep)
		i++;
	str = (char *) malloc (sizeof(char ) * (i + 1));
	if (!str)
		return (NULL);
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

static	char	**ft_free_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char sep)
{
	char	**split;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	split = (char **) malloc ((sizeof(char *)) * (ft_count_word (s, sep) + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == sep)
			s++;
		if (*s)
		{
			split[i] = ft_count_word_size(s, sep);
			if (!split[i])
				return (ft_free_tab(split));
			i++;
		}
		while (*s && *s != sep)
			s++;
	}
	split[i] = 0;
	return (split);
}
