# Nombre de la biblioteca
NAME = libft.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Lista de archivos .c (agrega todos los ft_*.c que necesites)
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Objetos correspondientes a los archivos .c
OBJS = $(SRCS:.c=.o)

# Comando para crear la biblioteca estática
AR = ar -rcs

# Regla que genera la biblioteca (por defecto se ejecuta 'all')
all: $(NAME)

# Compilar los objetos y crear la biblioteca
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

#main:
#	$(CC) $(CFLAGS) main.c -L. -lft

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJS)

# Regla para limpiar todo (objetos y la biblioteca)
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo (fclean + all)
re: fclean all

# Indicamos que no son archivos reales
.PHONY: all clean fclean re
