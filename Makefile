# Instructions
NAME 	= libft.a
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
AR 		= ar rc
RM 		= rm -f

# Directories
OBJDIR	= obj

# Files
SRC	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c 		\
		ft_isdigit.c ft_strrchr.c ft_strdup.c ft_putchar_fd.c ft_split.c	\
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c 		\
		ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c 		\
		ft_tolower.c ft_toupper.c ft_calloc.c ft_strlcpy.c ft_strlcat.c 	\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c 		\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
OBJ	=	$(SRC:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(addprefix $(OBJDIR)/, $(OBJ))

%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) -c $< $(CFLAGS) -o $(OBJDIR)/$@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
