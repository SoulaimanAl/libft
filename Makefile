SRC = ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_atoi.c	ft_isascii.c	ft_memcmp.c	ft_strchr.c	ft_strlen.c	ft_strtrim.c	ft_bzero.c	ft_isdigit.c	ft_memcpy.c	ft_strdup.c	ft_strmapi.c	ft_substr.c	ft_calloc.c	ft_isprint.c	ft_memmove.c	ft_strjoin.c	ft_strncmp.c	ft_tolower.c	ft_isalnum.c	ft_itoa.c	ft_memset.c	ft_strlcat.c	ft_strnstr.c	ft_toupper.c	ft_isalpha.c	ft_memchr.c	ft_split.c	ft_strlcpy.c	ft_strrchr.c
BONUS_SRC = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c	ft_lstlast_bonus.c	ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c	ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstmap_bonus.c
OBJ = $(SRC:%.c=%.o)
CFLAGS = -Wall -Werror -Wextra
BONUS_OBJ = $(BONUS_SRC:%.c=%.o)

NAME = libft.a

all: $(NAME)

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc -I. $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
