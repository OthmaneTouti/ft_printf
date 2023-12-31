# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 16:02:25 by ottouti           #+#    #+#              #
#    Updated: 2023/10/29 14:03:03 by ottouti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_ROOT = ./libft

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L. -lftprintf
INCFLAGS = -I$(LIBFT_ROOT)

RM = rm -f
LIB = ar rcs
MAKE = make

NAME = libftprintf.a
SRC = ft_printf.c \
		ft_printf_utils.c
OBJ = $(SRC:.c=.o)
INCLUDE = ft_printf.h


all: libft_all $(NAME)

$(NAME): $(OBJ)
	cp $(LIBFT_ROOT)/libft.a $(NAME)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) $(INCFLAGS) -c -o $@ $<

#bonus: all

clean: libft_clean
	$(RM) $(OBJ)

fclean: libft_fclean clean
	$(RM) $(NAME)

re: fclean all

test: CCFLAGS += -g
test: all
	$(CC) $(CCFLAGS) $(LDFLAGS) -L./libft -lft $(INCFLAGS) -o test main.c


libft_all:
	$(MAKE) -C $(LIBFT_ROOT) all

#libft_bonus:
#	$(MAKE) -C $(LIBFT_ROOT) bonus

libft_clean:
	$(MAKE) -C $(LIBFT_ROOT) clean

libft_fclean:
	$(MAKE) -C $(LIBFT_ROOT) fclean