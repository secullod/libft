/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 12:52:19 by secullod          #+#    #+#             */
/*   Updated: 2020/05/18 17:11:33 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
		if (del)
			while (*lst)
			{
				tmp = (*lst)->next;
				ft_lstdelone(*lst, del);
				*lst = tmp;
			}
	*lst = NULL;
}
