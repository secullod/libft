/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:53:47 by secullod          #+#    #+#             */
/*   Updated: 2020/05/17 11:54:14 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (!(arr = malloc(nmemb * size * sizeof(char))))
		return (NULL);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}
