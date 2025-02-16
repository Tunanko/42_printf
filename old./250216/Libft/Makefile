# コンパイラとフラグの定義
CC = cc
CFLAGS = -Wall -Wextra -Werror

# ソースファイルとオブジェクトファイルの定義。どんどん追加していく
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strncmp.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_strdup.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_split.c\
	   ft_itoa.c\
	   ft_strmapi.c\
	   ft_striteri.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_calloc.c

OBJS = $(SRCS:.c=.o)

# 出力ファイル名
NAME = libft.a

# デフォルトターゲット
all: $(NAME)

# ライブラリの作成
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# 中間生成物のクリーンアップ
clean:
	rm -f $(OBJS)

# すべての生成物のクリーンアップ
fclean: clean
	rm -f $(NAME)

# 再ビルド
re: fclean all

# .PHONYを指定しておくと、ターゲットがファイル名と衝突するのを防ぐ
.PHONY: all clean fclean re
