/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/27 10:57:50 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

void	ft_converttoformat(char *format, char *str);
{
	
}
void	ft_printf(char *trav, ...)
{
	va_list		argv;
	char		*s;
	char		*str;
	int			i;

	i = 0;
	va_start(argv, trav);
	str = ft_strdup(trav);

	while (trav) /*you must test number of %*/
	{

		s = va_arg(argv, char*);
		if (trav == '\0' || s == NULL)
			break;
		while (str[i] != '%'  && trav != '\0')
		{
			if (str[i - 1] != '%')
				write(1, &str[i], 1);
			i++;
		}
		i++;
		printf("\n\n");
		ft_putstr(s);
		ft_putchar('\n');
	}
	va_end(argv);
}


