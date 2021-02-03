/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:45:01 by secullod          #+#    #+#             */
/*   Updated: 2020/05/20 10:23:30 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (!(arr = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		arr[i] = f(i, s[i]);
	arr[i] = '\0';
	return (arr);
}
