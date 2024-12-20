# **************************************************************************** #
#                              Makefile - libftprintf                         #
# **************************************************************************** #

# Variables
NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
INCLUDES := -Iincludes/ft_printf -Iincludes/libft
LIBFT_DIR := includes/libft
LIBFT := $(LIBFT_DIR)/libft.a
HEADER := includes/ft_printf.h

SRC_DIR := src
OBJ_DIR := obj

SRC_FILES := \
	utils.c \
	unsigned_utils.c \
	hex_utils.c \
	ft_printf.c \
	handle_conversions.c

SRC := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

# Rules
all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "Compiling libft..."
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@echo "Creating $(NAME)..."
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo "Done."

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER) | $(OBJ_DIR)
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "Cleaning object files..."
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "Cleaning library..."
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

