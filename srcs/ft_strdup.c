/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:59:15 by secullod          #+#    #+#             */
/*   Updated: 2020/05/17 10:59:59 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*arr;

	i = 0;
	while (s[i])
		i++;
	if (!(arr = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		arr[i] = s[i];
	arr[i] = '\0';
	return (arr);
}
