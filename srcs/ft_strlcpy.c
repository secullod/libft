/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:18:52 by secullod          #+#    #+#             */
/*   Updated: 2020/05/17 10:47:11 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	slen;

	slen = 0;
	while (size > 0 && slen < size - 1 && src[slen] != '\0')
	{
		dst[slen] = src[slen];
		slen++;
	}
	if (size != 0)
		dst[slen] = '\0';
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	return (slen);
}
