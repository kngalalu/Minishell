# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kngalalu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/31 09:50:29 by kngalalu          #+#    #+#              #
#    Updated: 2019/07/31 10:12:42 by kngalalu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = gcc

CFLAG = -Wall -Wextra -Werror -c 

SOURCE =	 ft_strrealloc.c ft_atoi.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strcpy.c ft_strlcat.c ft_strnequ.c ft_strtrim.c ft_puttab.c	\
					 ft_bzero.c  ft_memalloc.c ft_memset.c ft_putstr.c ft_strdel.c ft_strlen.c ft_strnew.c ft_tolower.c	\
					 ft_isalnum.c  ft_memccpy.c  ft_putchar.c  ft_putstr_fd.c  ft_strdup.c ft_strmap.c ft_strnstr.c ft_toupper.c	\
					 ft_isalpha.c  ft_memchr.c ft_putchar_fd.c ft_strcat.c ft_strequ.c ft_strmapi.c  ft_strrchr.c	\
					 ft_isascii.c  ft_memcmp.c ft_putendl.c  ft_strchr.c ft_striter.c  ft_strncat.c  ft_strsplit.c	\
					 ft_isdigit.c  ft_memcpy.c ft_putendl_fd.c ft_strclr.c ft_striteri.c ft_strncmp.c  ft_strstr.c	\
					 ft_isprint.c  ft_isspace.c ft_memdel.c ft_putnbr.c ft_strcmp.c ft_strjoin.c get_next_line.c ft_strncpy.c  ft_strsub.c ft_putstrx3.c\


OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME):
		@$(CC) -c $(CFLAG) $(SOURCE)
		@ar rc $(NAME) $(OBJECTS)
		@ranlib $(NAME)

clean:
		@/bin/rm -f $(OBJECTS)

fclean:	clean
		@/bin/rm -f $(NAME)

re:		fclean all
