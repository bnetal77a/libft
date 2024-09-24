CC = gcc
AR = ar -rc
RM = rm -f
FLAGS = -Wall -Wextra -Werror -I ./
FILES = ft_atoi.c ft_isdigit.c ft_strcmp.c ft_strdup.c ft_strlen.c ft_strncmp.c\
		 ft_strstr.c ft_isalpha.c ft_strcat.c ft_strcpy.c ft_strlcat.c ft_strncat.c ft_strncpy.c  
OBJS = $(FILES:.c=.o)
LIBNAME = libft.a
RN_LIB = ranlib

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	$(AR) $(LIBNAME) $(OBJS)
	$(RN_LIB) $(LIBNAME)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIBNAME)

re: fclean all