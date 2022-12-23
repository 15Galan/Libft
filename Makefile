# Instructions
NAME 	= 	libft.a
CC 		= 	gcc
CFLAGS 	= 	-Wall -Wextra -Werror
AR 		= 	ar rc
RM 		= 	rm -f

# Directories
OBJDIR	= 	obj

# Files
SRC		=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c 		\
			ft_isdigit.c ft_strrchr.c ft_strdup.c ft_putchar_fd.c ft_split.c	\
			ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c 		\
			ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c 		\
			ft_tolower.c ft_toupper.c ft_calloc.c ft_strlcpy.c ft_strlcat.c 	\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c 		\
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
OBJ		=	$(addprefix $(OBJDIR)/, $(SRC:.c=.o))
SRCBON 	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c  		\
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c		\
			ft_lstclear_bonus.c	ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJBON 	=	$(addprefix $(OBJDIR)/, $(SRCBON:.c=.o))

# Rules
all: $(NAME)
	@echo "File '$(NAME)' created."

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "Mandatory functions compiled."

bonus: $(OBJ) $(OBJBON)
	@$(AR) $(NAME) $(OBJ) $(OBJBON)
	@echo "Mandatory and bonus functions compiled."

$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "* File '$<' compiled."

clean:
	@$(RM) -r $(OBJDIR)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "File '$(NAME)' removed."

re: fclean all

.PHONY: all bonus clean fclean re
