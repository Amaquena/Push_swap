# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaquena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 12:39:12 by amaquena          #+#    #+#              #
#    Updated: 2019/09/12 09:48:11 by amaquena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CHCK = checker
PUSH = push_swap
CFILES = swap.c list.c rotate.c reverse.c sorter.c algo.c algo_assist.c
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

all: $(NAME) $(CHCK) $(PUSH)
clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(CHCK)
	@rm -f $(PUSH)
re: fclean all
	@echo "\t\t---COMPLETED---\n"
$(CHCK):  $(NAME)
	$(CC) $(FLAGS) $(CHCK).c $(NAME) $(LIBFT) -o $(CHCK)
	@echo "______________________________________________________________________\n"
$(PUSH):  $(NAME)
	$(CC) $(FLAGS) $(PUSH).c $(NAME) $(LIBFT) -o $(PUSH)
	@echo "______________________________________________________________________\n"
cgcc: re
	$(CC) -g $(FLAGS) checker.c $(CFILES) $(LIBFT) -o checker
	@echo "______________________________________________________________________\n"
pgcc: re
	$(CC) -g $(FLAGS) push_swap.c $(CFILES) $(LIBFT) -o push_swap
	@echo "______________________________________________________________________\n"
run: fclean $(PUSH)
	./push_swap 4 3 5 1 2
