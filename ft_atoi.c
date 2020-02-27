/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:34:13 by eestell           #+#    #+#             */
/*   Updated: 2020/02/27 10:03:06 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define LLONG_MAX 9223372036854775807

int	ft_atoi(const char *str)
{
	int						i;
	unsigned long long		number;
	int						zn;

	number = 0;
	i = 0;
	zn = 1;
	while ((str[i] < 14 && str[i] > 8) || str[i] == 32)
		i++;
	if ((str[i] == '-' || str[i] == '+') && (str[i + 1] > '9' ||
	str[i + 1] < '0'))
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			zn = (-1);
		i++;
	}
	while (((str[i] <= '9') && (str[i] >= '0')))
		number = number * 10 + str[i++] - '0';
	if (zn == (1))
		return (number < LLONG_MAX ? (int)(number) : -1);
	else
		return (number < LLONG_MAX ? (int)(-number) : 0);
}
