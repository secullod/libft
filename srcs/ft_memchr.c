/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:22:15 by secullod          #+#    #+#             */
/*   Updated: 2020/05/20 10:21:22 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	i = 0;
	str1 = (unsigned char *)s;
	while (i++ < n)
		if (*str1++ == (unsigned char)c)
			return (str1 - 1);
	return (NULL);
}
