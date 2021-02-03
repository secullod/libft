/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:49:07 by secullod          #+#    #+#             */
/*   Updated: 2020/05/20 10:22:55 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		x;
	int		y;
	char	*arr;

	x = -1;
	y = 0;
	len = 0;
	while (s1[len])
		len++;
	while (s2[y++])
		len++;
	if (!(arr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s1[++x])
		arr[x] = s1[x];
	y = 0;
	while (s2[y])
		arr[x++] = s2[y++];
	arr[x] = '\0';
	return (arr);
}
