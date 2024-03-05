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

# mandatory
SRC_DIR = ./
SRC = \
	  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	  ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c\
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	  ft_atoi.c ft_calloc.c ft_strdup.c  ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c

OBJ = $(SRC:%.c=%.o) 


# BONUS
B_SRC = $(addprefix $(SRC_DIR)ft_, $(addsuffix .c, \
		lstnew lstadd_front lstsize lstlast lstadd_back lstdelone \
		lstclear lstiter lstmap))
B_OBJ = $(B_SRC:%.c=%.o)

# header
TOP = ./
HEAD = -I $(TOP)

# compile
CC = gcc
CFLAGS = -Wall -Werror -Wextra $(HEAD)

# create a static library = for code organization and reuse / linking purpose
SLIB = ar -rcs

# remove files
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBCR) $(NAME) $(OBJ)

bonus: $(B_OBJ)
	$(LIBCR) $(NAME) $(B_OBJ)

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re : fclean all

norme:
	norminette -R CheckForbiddenSourceHeader $(SRC) $(B_SRC) ./libft.h

.PHONY: all clean fclean re norme 
 
