SOURCES := ft_isalpha.c \
		   ft_isdigit.c \
		   ft_isalnum.c \
		   ft_isascii.c \
		   ft_isprint.c \
		   ft_strlen.c \
		   ft_memset.c \
		   ft_bzero.c \
		   ft_memcpy.c \
		   ft_memmove.c \
		   ft_strlcpy.c \
		   ft_strlcat.c \
		   ft_toupper.c \
		   ft_tolower.c \
		   ft_strchr.c \
		   ft_strrchr.c \
		   ft_strncmp.c \
		   ft_memchr.c \
		   ft_memcmp.c \
		   ft_strnstr.c \
		   ft_atoi.c \
		   ft_calloc.c \
		   ft_strdup.c \
		   ft_substr.c \
		   ft_strjoin.c \
		   ft_strtrim.c \
		   ft_split.c \
		   ft_itoa.c \
		   ft_strmapi.c \
		   ft_striteri.c \
		   ft_putchar_fd.c \
		   ft_putstr_fd.c \
		   ft_putendl_fd.c \
		   ft_putnbr_fd.c \

BONUS_SOURCES := ft_lstnew_bonus.c \
				 ft_lstadd_front_bonus.c \
				 ft_lstsize_bonus.c \
				 ft_lstlast_bonus.c \
				 ft_lstadd_back_bonus.c \
				 ft_lstdelone_bonus.c \
				 ft_lstclear_bonus.c \
				 ft_lstiter_bonus.c \
				 ft_lstmap_bonus.c \

OBJECTS := $(SOURCES:%.c=%.o)
BONUS_OBJECTS := $(BONUS_SOURCES:%.c=%.o)

HEADERS := libft.h
NAME := libft.a
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	ar -rcs $@ $^

%.o: %.c $(HEADERS)
	cc -c $< -o $@ $(CFLAGS)

all: $(NAME)

re: fclean all

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

bonus: $(NAME) $(BONUS_OBJECTS)
	ar -rcs $^

test: test.c bonus
	cc $< $(NAME) -o $@ -lbsd $(CFLAGS)
	./$@ | less -SR

test.c:
	@ wget -q https://raw.githubusercontent.com/datagore/hive-libft/refs/heads/main/test.c

norm:
	norminette ft_*.c libft.h

# Show all files in the order in which they appear in the eval sheet.
eval:
	@ cat \
	ft_strlen.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memmove.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_atoi.c \
	ft_strnstr.c \
	ft_strncmp.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_lstnew_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c \
	| pygmentize -l c -O style=monokai | less -SRx4

.PHONY: all re fclean clean bonus test norm eval
.SECONDARY: $(OBJECTS) $(BONUS_OBJECTS)
