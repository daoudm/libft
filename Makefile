# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marwa <marwa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 22:50:51 by mdaoud            #+#    #+#              #
#    Updated: 2018/11/12 20:23:22 by marwa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	libft.a
CC		= 	gcc
CFlAGS	= 	-Wall -Werror -Wextra
HEADERS	=	libft.h
SRC 	=	$(wildcard *.c)
OBJ		=	$(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFlAGS) -c $(SRC) -l$(HEADERS)
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET) 

%.o: %c
	$(CC) $(CFlAGS) -c $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
