/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/28 06:37:22 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

void		ft_converttoformat(char *format, char *str)
{
	int		i;

	i = 0;
	//printf("test: %s\n", format);	
	//printf("%s\n", str);
	//printf("str[0]= %c\n", format[0]);
	while (format[i] != '%')
	{
		if (format[i - 1] != '%')
			ft_putchar(format[i]);
		i++;
	}
	i++;
	if (format [i] == 's')
		printf("%s\n", str);
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


