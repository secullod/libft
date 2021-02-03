/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 21:00:11 by secullod          #+#    #+#             */
/*   Updated: 2020/05/18 19:02:44 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		intlen(long long num, int len)
{
	while ((num /= 10) > 0)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	int			sign;
	int			len;
	char		*str;
	long long	num;

	num = n;
	sign = num < 0 ? 1 : 0;
	len = sign == 1 ? 2 : 1;
	num = num < 0 ? -num : num;
	len = intlen(num, len);
	num = n;
	num = num < 0 ? -num : num;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[len] = '0';
	while (num > 0)
	{
		str[len--] = num % 10 + '0';
		num /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
