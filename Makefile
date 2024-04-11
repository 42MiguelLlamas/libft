# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mllamas- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 18:53:35 by mllamas-          #+#    #+#              #
#    Updated: 2023/09/30 17:56:54 by mllamas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRCS = ft_itoa.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_lstadd_back.c ft_memcmp.c ft_strdup.c ft_strtrim.c ft_atoi.c ft_lstadd_front.c ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_lstclear.c ft_memmove.c ft_strjoin.c ft_tolower.c ft_calloc.c ft_lstdelone.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c ft_lstiter.c ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c ft_lstlast.c ft_putendl_fd.c ft_strlen.c ft_isascii.c ft_lstmap.c ft_putnbr_fd.c ft_strmapi.c ft_isdigit.c ft_lstnew.c ft_putstr_fd.c ft_strncmp.c ft_isprint.c ft_lstsize.c ft_split.c ft_strnstr.c
OBJS = $(SRCS:.c=.o)
BONUSSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUSOBJS = $(BONUSSRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
DEP = libft.h


.PHONY: all bonus clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUSOBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUSOBJS)


