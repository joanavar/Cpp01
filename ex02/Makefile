# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanavar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 12:54:59 by joanavar          #+#    #+#              #
#    Updated: 2025/02/26 13:10:40 by joanavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Punteros
SRCS		=	Main.cpp
CC			=	clang++

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

