# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 08:51:15 by hheng             #+#    #+#              #
#    Updated: 2024/03/05 18:28:45 by hheng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# compile
CFLAGS = -Wall -Werror -Wextra 

# mandatory
SRC = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c\
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c  ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c

OBJ = $(SRC:.c=.o) 

# BONUS
B_SRC = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

B_OBJ = $(B_SRC:.c=.o)

all: $(NAME) $(B_SRC)

$(NAME): $(OBJ)
	ar -rcs $@ $?

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $?

$.o: $.c
	cc -c $(NAME) $?

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re 
 
