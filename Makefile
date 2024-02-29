SRCDIR			= .
SRCS			= $(addprefix $(SRCDIR)/,\
	ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
)
OBJDIR			= objs
OBJS			= $(subst $(SRCDIR)/,$(OBJDIR)/,$(subst .c,.o,$(SRCS)))
OBJDIRS			= $(sort $(dir $(OBJS)))

HEADERS			= libft.h

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror #-fsanitize=address -g3
IFLAGS			= -I.
RM				= rm -rf

NAME			= libft.a

UP				= \033[1A
FLUSH			= \033[2K

TESTER_SUPREME	= SupremeTester
TESTER_KIDS		= Libftest libftTester libft_tester libft-unit-test libftTester
TESTER_SUB		= $(TESTER_SUPREME)/libft-war-machine
TESTER	= LibftTester


all: $(NAME)

bonus: $(NAME)

$(TESTER_SUPREME):
	git clone https://github.com/FranFrau/Supreme-Tester-Libft $(TESTER_SUPREME)
	cd $(TESTER_SUPREME); sh tester.sh
	export FILE=$(TESTER_SUB)/my_config.sh; sed "s|PATH_LIBFT=\"\.\./\"|PATH_LIBFT=\"$$(pwd)\"|g" $$FILE > temp; cat temp > $$FILE; $(RM) temp

$(TESTER):
	git clone https://github.com/Tripouille/libftTester.git $(TESTER)

test: $(TESTER)
	make -C $(TESTER) a

# rename:
#	find . -type f -name "ft_lst*" | while read -r file; do new_file="$${file%.c}_bonus.c"; mv $$file $$new_file; done;

# test: $(TESTER_SUPREME)
# 	sh $(TESTER_SUPREME)/tester.sh

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJDIRS):
	mkdir -p $@
	@echo "$(UP)$(FLUSH)$(UP)"

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADERS) | $(OBJDIRS)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@echo "$(UP)$(FLUSH)$(UP)"

clean:
	@$(RM) $(OBJDIR)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(TESTER)

# tclean:
# 	@$(RM) $(TESTER_SUPREME) $(TESTER_KIDS)

re: fclean $(NAME)

.PHONY: all clean fclean re test
