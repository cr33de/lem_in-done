NAME = lem-in

LIBF = libft/

SRCS = src/

CCFL = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(MAKE) -C ./src/

clean:
	@$(MAKE) clean -C ./src/

fclean:
	@$(MAKE) fclean -C ./src/
	@$(MAKE) fclean -C ./libft/

re: fclean all

.PHONY: all clean fclean norm checker push_swap re
