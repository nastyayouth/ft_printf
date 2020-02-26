# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eestell <eestell@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 03:10:51 by eestell           #+#    #+#              #
#    Updated: 2020/02/26 06:03:46 by eestell          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_printf

HEADER = ft_printf.h

SRC = ft_printf.c ft_find_format.c\

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		@ar rc $(NAME) $(OBJECTS)
			@ranlib $(NAME)

%.o: %.c $(HEADER)
		@gcc -Wall -Werror -Wextra -c $<

.PHONY: clean fclean re

clean: 
		@/bin/rm -f $(OBJECTS)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
