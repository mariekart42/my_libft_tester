# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 00:22:41 by mmensing          #+#    #+#              #
#    Updated: 2022/05/27 22:00:39 by mmensing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
#define compiler and flags
CC= gcc
#CFLAGS= -Wall -Wextra -Werror
HEADER= libft.h
#Source Functions for the library
MAND_SRC = my_isalpha.c my_isdigit.c my_isalnum.c my_isascii.c my_isprint.c my_strlen.c \
         my_memset.c my_bzero.c my_memcpy.c my_memmove.c my_strlcpy.c my_strlcat.c \
         my_toupper.c my_tolower.c my_strchr.c my_strrchr.c my_strncmp.c \
         my_memchr.c my_memcmp.c my_strnstr.c my_atoi.c \
         my_calloc.c my_strdup.c \
         my_substr.c my_strjoin.c my_strtrim.c my_strmapi.c \
	    my_itoa.c my_striteri.c my_putstr_fd.c my_putendl_fd.c my_putnbr_fd.c \
	    my_split.c \
		 
BONUS_SRC = my_lstnew.c my_lstsize.c my_lstadd_front.c my_lstadd_back.c my_lstdelone.c \
			my_lstclear.c my_lstiter.c my_lstlast.c my_lstmap.c \
		   
# The object files after compiling
MAND_OBS = $(MAND_SRC:%.c=%.o)

BONUS_OBS = $(BONUS_SRC:%.c=%.o)

RM = rm -f

all: $(NAME)

$(NAME): $(MAND_OBS) $(HEADER)
	ar rcs $(NAME) $(MAND_OBS)



clean:
	$(RM) $(MAND_OBS) $(BONUS_OBS)

fclean: clean
	${RM} $(NAME)
	
bonus: $(BONUS_OBS) $(HEADER)
	ar rcs $(NAME) $(BONUS_OBS)

#re not working prop
re: fclean all

.PHONY: all clean fclean re bonus





