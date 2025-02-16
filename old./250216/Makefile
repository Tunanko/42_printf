NAME        = libftprintf.a
SRCS        = ft_printf.c ft_printf_utils.c ft_printf_conversions.c
OBJS        = $(SRCS:.c=.o)
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f
LIBFT_DIR   = libft
LIBFT_LIB   = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR)  # libftをビルド（利用可能な場合）
	@cp $(LIBFT_LIB) $(NAME)  # libft.a をコピーしてライブラリ名に変更
	@$(AR) $(NAME) $(OBJS)    # ft_printfのオブジェクトを追加

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
