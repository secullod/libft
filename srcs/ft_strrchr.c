/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 19:53:13 by secullod          #+#    #+#             */
/*   Updated: 2020/05/17 10:42:31 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	if (c == 0)
		return ((char *)s + i);
	while (--i >= 0)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
