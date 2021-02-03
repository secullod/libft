NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_isdigit.c ft_itoa.c \
	  ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_putstr_fd.c ft_strlcat.c ft_strchr.c \
	  ft_strlcpy.c ft_strdup.c \
	  ft_strjoin.c ft_strlcat.c ft_strlen.c \
	  ft_strmapi.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_split.c \
	  ft_substr.c ft_strtrim.c ft_tolower.c ft_toupper.c \

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

OBJ = ${SRC:.c=.o}

OBJBONUS = ${BONUS:.c=.o}

.c.o:
		gcc -Wall -Wextra -Werror -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJ}
		ar rcs ${NAME} ${OBJ}

bonus:	${OBJ} ${OBJBONUS}
		ar rcs ${NAME} ${OBJ} ${OBJBONUS}

all:	${NAME}

clean:
		rm -f ${OBJ} ${OBJBONUS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all