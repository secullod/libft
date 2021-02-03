/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:33:15 by secullod          #+#    #+#             */
/*   Updated: 2020/05/20 10:26:08 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findend(int start, char const *s1, char const *set)
{
	int	end;
	int	z;
	int	y;

	z = 0;
	end = 0;
	while (s1[end])
		end++;
	end = end - 1;
	while (z == 0 && end > 0 && end > start)
	{
		z = 1;
		y = 0;
		while (set[y])
			if (set[y++] == s1[end])
			{
				end--;
				z = 0;
			}
	}
	return (end);
}

static int	findstart(char const *s1, char const *set)
{
	int	start;
	int	z;
	int	y;

	z = 0;
	start = 0;
	while (z == 0)
	{
		z = 1;
		y = 0;
		while (set[y])
			if (set[y++] == s1[start])
			{
				z = 0;
				start++;
			}
	}
	return (start);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		start;
	int		end;
	int		y;

	y = 0;
	start = findstart(s1, set);
	end = findend(start, s1, set);
	if (!(arr = (char *)malloc(((end - start) + 2) * sizeof(char))))
		return (NULL);
	while (start <= end)
	{
		arr[y++] = s1[start++];
	}
	arr[y] = '\0';
	return (arr);
}
