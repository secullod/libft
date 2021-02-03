/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secullod <secullod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 10:46:29 by secullod          #+#    #+#             */
/*   Updated: 2020/05/17 11:57:06 by secullod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	sign;

	num = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\f' ||
	nptr[i] == '\f' || nptr[i] == '\v' || nptr[i] == '\n' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		sign = nptr[i++] == '-' ? -1 : 1;
	if (!(nptr[i] >= '0' && nptr[i] <= '9'))
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
		num = nptr[i + 1] >= '0' && nptr[i + 1] <= '9'
							? (num + nptr[i++] - '0') * 10
							: (num + nptr[i++] - '0');
	return (sign * num);
}
