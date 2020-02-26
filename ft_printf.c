/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/26 05:59:48 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

void	ft_printf(char *in_print, ...)
{
	va_list		argv;
	char		*trav;
	char		*s;
	t_printf	*v_format = NULL;
	char		*str;

	trav = in_print;
	va_start(argv, in_print);
	//puts(in_print);
	str = ft_strdup(in_print);
	ft_find_format(str);
	printf("%s",v_format->comment);
	while (trav != '\0')
	{
		s = va_arg(argv, char* );
		if (trav == '\0' || s == NULL)
		{	
			va_end(argv);
			break;			
		}
		puts(s);
		trav++;
	}	
}	

int		main()
{
	ft_printf("1111","2222","3333", "4444");
	return (0);
}
