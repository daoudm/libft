# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 22:50:51 by mdaoud            #+#    #+#              #
#    Updated: 2018/11/14 12:50:43 by mdaoud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		= 	gcc
CFlAGS	= 	-Wall -Werror -Wextra
HEADERS	=	libft.h
SRC 	=	$(wildcard *.c)
OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFlAGS) -c $(SRC) -I$(HEADERS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME) 

%.o: %c
	$(CC) $(CFlAGS) -c $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
