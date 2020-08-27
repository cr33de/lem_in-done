NAME = lem_in

FLAGS = -Wall -Wextra -Werror

FILES = create_paths \
		create_lists \
		create_rooms \
		display_error \
		find_name \
		get_map_info \
		isnum \
		main \
		room_location \
		roomID \
		print_results \
		solutions \

CFILES = $(FILES:%=./%.c)

OFILES = $(FILES:%=./%.o)

all: $(NAME)

$(NAME): $(OFILES)
	@$(MAKE) -C ../libft/
	@gcc -o ../$(NAME) $(OFILES) ../libft/libft.a

$(OFILES): $(CFILES)
	@gcc -c $(FLAGS) $(CFILES) -I ../inc/lem_in/

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f ../$(NAME)

re: fclean all

.PHONY: all clean fclean re