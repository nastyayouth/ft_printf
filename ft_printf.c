/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/27 10:16:41 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

void	ft_printf(char *in_print, ...)
{
	va_list		argv;
	char		*trav = NULL;
	char		*s;
	char		*str;
	int			i;

	i = 0;
	trav = in_print;
	va_start(argv, in_print);
	//puts(in_print);
	str = ft_strdup(in_print);
	//ft_find_format(str);
	while (trav != '\0' || s == NULL) /*you must test number of %*/
	{
		while (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		i++;
		printf("\n\n");
		s = va_arg(argv, char*);
		if (trav == '\0' || s == NULL)
		{
			va_end(argv);
			break;
		}
		ft_putstr(s);
		ft_putchar('\n');
		trav++;
	}
}


