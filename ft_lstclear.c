/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:02:01 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 04:11:29 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (del && lst)
	{
		while ((*lst) != NULL)
		{
			tmp = *lst;
			(*lst) = (*lst)->next;
			ft_lstdelone(tmp, del);
		}
	}
}
