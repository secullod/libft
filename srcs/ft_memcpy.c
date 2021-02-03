/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:19:58 by secullod          #+#    #+#             */
/*   Updated: 2020/05/20 16:01:41 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (!dest && !src)
		return (dest);
	i = 0;
	s = src;
	d = dest;
	while (i++ < n)
		*d++ = *s++;
	return (dest);
}
