/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:03:45 by imahri            #+#    #+#             */
/*   Updated: 2022/10/29 10:35:55 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nhead;
	t_list	*tmp;

	tmp = NULL;
	while (lst)
	{
		nhead = ft_lstnew(f(lst->content));
		if (!nhead)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, nhead);
		lst = lst->next;
	}
	return (tmp);
}
