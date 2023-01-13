# Instructions
NAME 	= 	libft.a
CC 		= 	gcc
CFLAGS 	= 	-Wall -Wextra -Werror
AR 		= 	ar rc
RM 		= 	rm -f

# Directories
OBJDIR	= 	obj

# Files
SRC		=	ft_ascii.c ft_file_numbers.c ft_file_text.c ft_int2str.c			\
			ft_mem_setters.c ft_mem_utils.c ft_split.c ft_str_generators.c 		\
			ft_str_modifiers.c ft_str_searchers.c ft_str_utils.c
OBJ		=	$(addprefix $(OBJDIR)/, $(SRC:.c=.o))
SRCBON 	=	ft_lst_adders.c ft_lst_deleters.c ft_lst_modifiers.c ft_lst_stats.c
OBJBON 	=	$(addprefix $(OBJDIR)/, $(SRCBON:.c=.o))

# Rules
all: $(NAME)
	$(info File '$(NAME)' created.)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	$(info Mandatory functions compiled.)

bonus: $(OBJ) $(OBJBON)
	@$(AR) $(NAME) $(OBJ) $(OBJBON)
	$(info Bonus functions compiled.)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	$(info * File '$<' compiled.)

clean:
	@$(RM) -r $(OBJDIR)
	$(info Object files removed.)

fclean: clean
	@$(RM) $(NAME)
	$(info File '$(NAME)' removed.)

re: fclean all

.PHONY: all bonus clean fclean re
