NAME = libft.a

# mandatory
SRC_DIR = ./
SRC = $(addprefix $(SRC_DIR)ft_, $(addsuffix .c, \isalpha isdigit isalnum isascii isprint toupper tolower \
		memset memcpy memmove memchr memcmp atoi bzero calloc\
		strlen strlcpy strlcat strncmp strchr strrchr strnstr strdup \
		substr strjoin strtrim split itoa strmapi striteri \
		putchar_fd putstr_fd putendl_fd putnbr_fd))

OBJ = $(SRC:%.c=%.o) 

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
$(SLIB) $(NAME) $(OBJ)

clean:
$(RM) $(OBJ) 

fclean: clean
$(RM) $(NAME)

re : fclean all

norme:
norminette -R CheckForbiddenSourceHeader $(SRC) $(B_SRC) ./libft.h

.PHONY: all clean fclean re norme 
