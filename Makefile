# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 19:03:57 by mdaoud            #+#    #+#              #
#    Updated: 2018/11/11 19:12:32 by mdaoud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# TARGET	=	libft.a
# CC		= 	gcc
# CFlAGS	=	-Wall -Werror -Wextra

# all: $(TARGET)

# $(TARGET):
# 	$(CC) $(CFlAGS) -c ft_display_file.c
# 	$(CC) $(CFlAGS) -o ft_display_file ft_display_file.o

# clean:
# 	rm -f ft_display_file.o

# fclean: clean
# 	rm -rf ft_display_file

	# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaoud <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 22:50:51 by mdaoud            #+#    #+#              #
#    Updated: 2018/08/22 19:02:41 by mdaoud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	libft.a
CC		= 	gcc
CFlAGS	= 	-Wall -Werror -Wextra
HEADERS	=	libft.h
SRC 	=	$(wildcard *.c)
OBJ		=	$(wildcard *.o)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFlAGS) -c $(SRC) -i$(HEADERS)
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
