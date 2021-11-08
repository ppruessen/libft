# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pprussen <pprussen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 12:57:29 by pprussen          #+#    #+#              #
#    Updated: 2021/06/12 10:47:09 by pprussen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c  ft_memchr.c \
				ft_isascii.c ft_isprint.c ft_memcpy.c ft_memccpy.c \
				ft_memmove.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c \
				ft_memcmp.c ft_strchr.c ft_strncmp.c ft_strrchr.c\
				ft_strnstr.c ft_atoi.c ft_strlcat.c ft_strlcpy.c ft_calloc.c \
				ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c ft_strtrim.c \
				ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c

SOURCES_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c


OBJ = $(SOURCES:.c=.o)

OBJ_B = $(SOURCES_B:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(SOURCES)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_B)
	$(CC) $(FLAGS) -c $(SOURCES_B)
	ar rcs $(NAME) $(OBJ_B)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re