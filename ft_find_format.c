/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 03:13:08 by eestell           #+#    #+#             */
/*   Updated: 2020/02/26 06:00:13 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf		ft_find_format(char* str)
{
	t_printf	*v_format;
	t_printf	*head;
	//int			count;
	int			start;
	int			i;

	start = 0;
	i = 0;
	//count = ft_count_prosent(str);
	v_format = (t_printf*)malloc(sizeof(t_printf));
	head = v_format;
	while (str[i] != '\0')
	{
		while (str[i] != '%')
			i++;
		/*if ((str[i - 1] == "d" || str[i - 1] == "s" || str[i - 1] == "c" ||
		str[i - 1] == "f" || str[i - 1] == "o") && (i-2 != start || start > i))

		{
			v_format->comment = ft_strsub(str, start, i-2);
			v_format -> type_var = str[i];
			v_format->next;
			v_format = (t_list*)malloc(sizeof(t_list));
		}*/
		printf("%c", str[i]);
		start = i + 1;              
	}
	return(*head);
}
