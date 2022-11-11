CC = gcc

NAME = libft.a

OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o  ft_strlen.o  ft_memcpy.o  ft_bzero.o ft_memset.o ft_memmove.o ft_tolower.o ft_toupper.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o  ft_substr.o ft_strdup.o ft_strlcat.o ft_strjoin.o ft_split.o ft_strtrim.o ft_itoa.o ft_strlcpy.o ft_calloc.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o  ft_putnbr_fd.o ft_strmapi.o ft_striteri.o ft_lstnew.o ft_lstadd_front.o  ft_lstsize.o  ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o  ft_lstiter.o ft_lstmap.o

BONUSOBJS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o  ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o  ft_lstiter.o ft_lstmap.o

ifdef with_bonus
    OBJS+=${BONUSOBJS}
endif


all: $(NAME) 

$(NAME): $(OBJS)
	$(AR) cr $@ $^

bonus:
    make with_bonus=1
	

clean:
	-$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	-$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re





# NAME =	libft.a
# SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  
# # OBJS = ${SRCS:%.c=%.o}
# OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o
# # SRCDIR = ./srcs
# HEDDIR = ./includes

# INCDIR  = -I../inc
 
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# RM = rm -f
# all: ${NAME}
	
# $(NAME): $(OBJS)
# 	ar r$(NAME) $^

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME) $(OBJS)

# re:    fclean all

# .PHONY :
# 	all clean fclean re 