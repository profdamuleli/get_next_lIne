#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldamulel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/25 11:39:23 by ldamulel          #+#    #+#              #
#    Updated: 2017/06/23 10:30:14 by ldamulel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILE = ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
		ft_memccpy.c ft_memcpy.c ft_memcmp.c ft_memchr.c \
		ft_memmove.c ft_memset.c ft_strlen.c ft_bzero.c \
		ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strncmp.c \
		ft_strcmp.c ft_strnstr.c ft_strstr.c ft_strchr.c \
		ft_strrchr.c ft_strdup.c ft_strlcat.c ft_atoi.c \
		ft_memdel.c ft_strdel.c ft_strnew.c ft_putendl.c \
		ft_putendl_fd.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strclr.c ft_memalloc.c ft_putnbr.c ft_putnbr_fd.c \
		ft_strjoin.c ft_strsub.c ft_strnequ.c ft_striter.c \
		ft_striteri.c ft_itoa.c ft_strsplit.c ft_strtrim.c \

OFILE = ft_putchar.o ft_putchar_fd.o ft_putstr.o ft_putstr_fd.o ft_memccpy.o \
		ft_memcpy.o ft_memcmp.o ft_memchr.o ft_memmove.o ft_memset.o ft_strlen.o \
		ft_bzero.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		ft_toupper.o ft_tolower.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o \
		ft_strncmp.o ft_strcmp.o ft_strnstr.o ft_strstr.o ft_strchr.o ft_strrchr.o \
		ft_strdup.o ft_strlcat.o ft_atoi.o ft_memdel.o ft_strdel.o ft_strnew.o \
		ft_putendl.o ft_putendl_fd.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strclr.o \
		ft_memalloc.o ft_putnbr.o ft_putnbr_fd.o ft_strjoin.o ft_strsub.o ft_strnequ.o \
		ft_striter.o ft_striteri.o ft_itoa.o ft_strsplit.o ft_strtrim.o \

HEADER = -I includes

all: $(NAME)

$(NAME) :	
	gcc -c -Wall -Wextra -Werror $(CFILE) $(HEADER)
	ar rc $(NAME) $(OFILE)
	ranlib $(NAME)

clean :
	rm -f $(OFILE)

fclean : clean
	rm -f $(NAME)

re: fclean all
