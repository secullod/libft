/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:34:16 by secullod          #+#    #+#             */
/*   Updated: 2020/05/19 12:45:19 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	dlen = 0;
	slen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	while (src[slen] && (dlen + slen + 1) < size)
	{
		dst[slen + dlen] = src[slen];
		slen++;
	}
	if (dlen != size)
		dst[dlen + slen] = '\0';
	while (src[i])
		i++;
	return (dlen + i);
}
