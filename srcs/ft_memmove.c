/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 14:47:27 by secullod          #+#    #+#             */
/*   Updated: 2020/05/21 10:11:14 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		i++;
		while (i <= n)
		{
			d[n - i] = s[n - i];
			i++;
		}
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
