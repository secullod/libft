/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:30:37 by secullod          #+#    #+#             */
/*   Updated: 2020/05/21 10:59:34 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (!(arr = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[start] && i < len)
	{
		arr[i++] = s[start];
		start++;
	}
	arr[i] = '\0';
	return (arr);
}
