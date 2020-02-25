/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 20:27:20 by eestell           #+#    #+#             */
/*   Updated: 2020/02/18 03:47:29 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
int		ft_printf(const char * format, ...)
{
	char			*traverse;
	unsigned int	i;
	char			*s;
	va_list			argv;
	va_start(argv, format);
	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			write(1, traverse, 1);
			traverse++;
		}
	}
	return (1);
}

int main()
{
	ft_printf("ertyui %d");
	return (0);
}
