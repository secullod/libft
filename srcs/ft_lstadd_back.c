/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:16:19 by secullod          #+#    #+#             */
/*   Updated: 2020/05/17 12:01:13 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
