NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = includes/libft/ft_isalpha.c includes/libft/ft_isdigit.c includes/libft/ft_isalnum.c includes/libft/ft_isascii.c includes/libft/ft_isprint.c includes/libft/ft_strlen.c includes/libft/ft_memset.c includes/libft/ft_bzero.c includes/libft/ft_memcpy.c includes/libft/ft_memmove.c includes/libft/ft_strlcpy.c includes/libft/ft_strlcat.c includes/libft/ft_toupper.c includes/libft/ft_tolower.c includes/libft/ft_strchr.c includes/libft/ft_strrchr.c includes/libft/ft_strncmp.c includes/libft/ft_memchr.c includes/libft/ft_memcmp.c includes/libft/ft_strnstr.c includes/libft/ft_atoi.c includes/libft/ft_calloc.c includes/libft/ft_strdup.c includes/libft/ft_substr.c includes/libft/ft_strjoin.c includes/libft/ft_strtrim.c includes/libft/ft_split.c includes/libft/ft_itoa.c includes/libft/ft_strmapi.c includes/libft/ft_striteri.c includes/libft/ft_putchar_fd.c includes/libft/ft_putstr_fd.c includes/libft/ft_putendl_fd.c includes/libft/ft_putnbr_fd.c src/ft_printf.c src/conversions.c src/utils.c src/hex_utils.c src/unsigned_utils.c

OBJS = $(SRCS:.c=.o)

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c includes/ft_printf.h includes/libft.h
	$(CC) $(CFLAGS) -Iincludes -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
