# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joannavarrogomez <joannavarrogomez@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 12:54:59 by joanavar          #+#    #+#              #
#    Updated: 2025/03/10 21:08:35 by joannavarro      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Replace
SRCS		=	Main.cpp
CC			=	c++

RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

%.o: %.cpp
		@$(CC) $(FLAGS) -c $< -o $@
		@echo '$(NAME) compiled'

all: $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) $^ -o $(NAME)
fclean: clean
		@$(RM) $(NAME)
clean: 
		@$(RM) $(OBJS)

re: fclean all

.PHONY	: all clean fclean re

