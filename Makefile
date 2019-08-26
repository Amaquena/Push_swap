# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaquena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 12:39:12 by amaquena          #+#    #+#              #
#    Updated: 2019/08/26 17:22:39 by amaquena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CFILES = swap.c list.c rotate.c reverse.c sorter.c
OFILES = $(CFILES:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT = -L./libft -lft

lft:
	$(MAKE) -C libft all
lftclean:
	$(MAKE) -C libft clean
lftfclean:
	$(MAKE) -C libft fclean
lftre:
	$(MAKE) -C libft re

$(NAME):
	@$(CC) -c $(FLAGS) $(CFILES)
	@ar rcs $(NAME) $(OFILES)
	@ranlib $(NAME)

all: $(NAME)
clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out
re: fclean all
	@echo "\t\t---COMPLETED---\n"
gcc: re
	$(CC) $(FLAGS) checker.c $(CFILES) $(LIBFT)
	@echo "______________________________________________________________________\n"
dgcc: re
	$(CC) -g $(FLAGS) checker.c $(CFILES) $(LIBFT)
	@echo "______________________________________________________________________\n"
