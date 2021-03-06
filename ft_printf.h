/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 06:46:12 by eestell           #+#    #+#             */
/*   Updated: 2020/02/29 08:19:46 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


void	    ft_find_format(char* str);
void	    ft_putchar(unsigned char c);
void	    ft_printf(char *in_print, ...);
void	    ft_putstr(char const *s);
char	    *ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
void        ft_print_real(char *format, char *str);
void        ft_converttoformat(char *format, va_list argv);
int	        ft_atoi(const char *str);
char		*ft_itoa(int n);
char	    *ft_strnew(size_t size);

#endif
