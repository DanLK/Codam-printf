NAME = libftprintf.a
SOURCES = ft_printf.c \
		ft_printc.c \
		ft_prints.c \
		ft_printp.c \
		ft_printd.c \
		ft_printu.c \
		ft_printx.c \
		ft_print_percent.c
OBJFILES = $(SOURCES:.c=.o)
CFLAGS += -Wall -Werror -Wextra

LIBFT_NAME = libft.a
LIBFT_PATH = ./libft

all: $(NAME)

$(NAME): $(OBJFILES) $(LIBFT_NAME)
	cp $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	ar rcs $(NAME) $(OBJFILES)
	

$(LIBFT_NAME): 
	$(MAKE) -C $(LIBFT_PATH)

clean: 
	rm -f $(OBJFILES)
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_PATH)/$(LIBFT_NAME)
	$(MAKE) -C libft clean

re: fclean all

.PHONY: all clean fclean re
