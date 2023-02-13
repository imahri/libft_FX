/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imahri <imahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:00:35 by imahri            #+#    #+#             */
/*   Updated: 2022/10/28 06:13:18 by imahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*llp;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		llp = ft_lstlast(*lst);
		llp->next = new;
	}
}
