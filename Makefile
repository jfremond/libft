# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 16:34:54 by jfremond          #+#    #+#              #
#    Updated: 2022/04/21 02:39:31 by jfremond         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################
#   EXECUTABLE   #
##################

NAME	=	libft.a

################
#   COMMANDS   #
################

CC		=	cc
LINK	=	ar -rcs
MKDIR	=	/bin/mkdir -p
RM		=	/bin/rm -rf

#########
# FLAGS #
#########

CFLAGS	=	-c -Wall -Wextra -Werror
CFLAGS	+=	-I $(HEAD_D)
CFLAGS	+=	-MMD -MP

###################
#   DIRECTORIES   #
###################

HEAD_D	=	headers/
SRCS_D	=	sources/
OBJS_D	=	objs/

###############
#   SOURCES   #
###############

SRCS	=	$(addprefix $(SRCS_D),	\
				ft_atoi.c			\
				ft_bzero.c			\
				ft_calloc.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_isspace.c		\
				ft_itoa.c			\
				ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c		\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c			\
				ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c		\
				ft_split.c			\
				ft_strchr.c			\
				ft_strcmp.c			\
				ft_strdup.c			\
				ft_strndup.c		\
				ft_strjoin_free.c	\
				ft_strjoin.c		\
				ft_strlcat.c		\
				ft_strlcpy.c		\
				ft_strlen.c			\
				ft_strmapi.c		\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strrchr.c		\
				ft_strrev.c			\
				ft_strstr.c			\
				ft_strtrim.c		\
				ft_substr.c			\
				ft_tolower.c		\
				ft_toupper.c		\
			)
			
###############
#   OBJECTS   #
###############

OBJS	=	$(SRCS:.c=.o)
OBJS	:=	$(addprefix $(OBJS_D), $(OBJS))

####################
#   DEPENDENCIES   #
####################

DEP_N	=	$(OBJS:.o=.d)

#############
#   RULES   #
#############

all:	$(NAME)

$(NAME):	$(OBJS)
			$(LINK) $(NAME) $(OBJS)

-include $(DEP_N)

$(OBJS_D)%.o:	%.c
				$(MKDIR) $(@D)
				$(CC) $(CFLAGS) $(OUTPUT_OPTION) $<

clean:
			$(RM) $(OBJS_D)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclan re
