# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 13:30:49 by aaoutem-          #+#    #+#              #
#    Updated: 2022/11/02 18:45:00 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= GCC
FLAGS=-Wall -Wextra -Werror libft.h
AR=ar cr
RM=rm -rf
FILES= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_strlen \
	   ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp \
	   ft_strnstr ft_strlcpy ft_strlcat ft_atoi ft_strdup \
	   ft_substr ft_strjoin ft_split ft_itoa ft_strmapi \
	   ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_isprint \
	   ft_putnbr_fd ft_strtrim ft_memcpy ft_memmove ft_memset \
	   ft_memcmp ft_memchr ft_bzero ft_calloc ft_striteri
BONFILES = ft_lstnew ft_lstadd_front \
		ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
		ft_lstclear ft_lstiter ft_lstmap
OBJF=$(FILES:=.o)
BONOBJF=$(BONFILES:=.o)
NAME=libft.a

all: $(NAME)

$(NAME): $(OBJF)
	@$(AR) $(NAME) $^

bonus: all $(BONOBJF)
	$(AR) $(NAME) $(BONOBJF)

%.o: %.c libft.h
	@$(CC) $(FLAGS) $< -c

clean:
	@$(RM) $(OBJF) $(BONOBJF)

fclean: clean
	@${RM} $(NAME)

re: fclean all bonus
