/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/28 07:08:15 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include <string.h>


void		ft_converttoformat(char *format, void *str)
{
	int		i;
	int		*number;

	i = 0;
	while (format[i] != '%')
	{
		if (format[i - 1] != '%')
			ft_putchar(format[i]);
		i++;
	}
	i++;
	if (format [i] == 's')
		printf("%s\n", str);
	/*if (format [i] == 'd')
	{
		//i = ft_atoi(str);
		//i = stoi(str);
	
		printf("%d\n", i);
	}*/
	//if (format [i] == 'd')
	//	printf("%s\n", str);
}

void	ft_printf(char *trav, ...)
{
	va_list		argv;
	char		*s;
	char		*str;
	int			i;
	int			start;

	i = 0;
	va_start(argv, trav);
	str = ft_strdup(trav);
	start = 0;
	while (trav) /*you must test number of %*/
	{
		s = va_arg(argv, char*);
		if (str == '\0' || s == NULL)
			break;
		while (str[i] != '%'  && trav != '\0')
			i++;
		ft_converttoformat(&str[start], s);
		i++;
		start = i;
	}
	va_end(argv);
}


