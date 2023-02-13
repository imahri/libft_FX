/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:56:18 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 04:07:15 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *) malloc (sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
