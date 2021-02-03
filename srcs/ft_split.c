/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:00:38 by secullod          #+#    #+#             */
/*   Updated: 2020/05/18 19:03:20 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words(char const *s, char c)
{
	int	w;
	int	i;

	w = 0;
	i = -1;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			w++;
	return (w);
}

static void		fillwords(char **arr, char const *s, char c)
{
	int	i;
	int	j;
	int	w;

	i = -1;
	w = 0;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
			arr[w][j++] = s[i];
		if ((i > 0 && s[i] == c && s[i - 1] != c) ||
				(s[i] != c && s[i + 1] == '\0'))
		{
			arr[w][j] = '\0';
			w++;
			j = 0;
		}
	}
	arr[w] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		w;
	int		x;

	w = words(s, c);
	if (!(arr = malloc((w + 1) * sizeof(char *))))
		return (NULL);
	i = -1;
	x = 0;
	w = 0;
	while (s[++i])
	{
		if (s[i] != c)
			x++;
		if ((i > 0 && s[i] == c && s[i - 1] != c) ||
				(s[i] != c && s[i + 1] == '\0'))
		{
			if (!(arr[w++] = malloc((x + 2) * sizeof(char))))
				return (NULL);
			x = 0;
		}
	}
	fillwords(arr, s, c);
	return (arr);
}
