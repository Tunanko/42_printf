# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/16 19:28:21 by ijoja             #+#    #+#              #
#    Updated: 2025/02/16 19:28:22 by ijoja            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_printf.c ft_printf_utils1.c ft_printf_utils2.c

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)  

fclean: clean
	$(RM) $(NAME)  

re: fclean all

.PHONY: all clean fclean re