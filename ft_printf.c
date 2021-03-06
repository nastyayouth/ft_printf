/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/29 09:38:17 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <string.h>

void			ft_converttoformat(char *format, va_list argv)
{
	int			i;
	int			*number;
	char		*s;
	intmax_t	d;
	char		*buf;

	i = 0;
	while (format[i] != '%' && format[i] != '\0')
	{
		if (format[i - 1] != '%' && (i != '0') && (format[i] != '\0'))
			ft_putchar(format[i]);
		i++;
	}
	i++;
	if (format [i] == 's')
	{
		s = va_arg(argv, char*);
		ft_putstr(s);
	}
	if (format [i] == 'd')
	{		
		d =  (unsigned int)va_arg(argv, int*);
		buf = ft_itoa(d);
		ft_putstr(buf);
		free(buf);
	}
	
}

void			ft_printf(char *trav, ...)
{
	va_list		argv;
	char		*str;
	int			i;
	int			start;

	i = 0;
	va_start(argv, trav);
	str = ft_strdup(trav);
	start = 0;
	while (trav && str[i] != '\0') /*you must test number of %*/
	{
		
		if (str == '\0')
			break;
		while (str[i] != '%' && str[i] != '\0'  && trav != '\0')
			i++;
		ft_converttoformat(&str[start], argv);
		i++;
		start = i;
	}
	
	va_end(argv);
	free(str);
	//free(&trav);
}


