CC = gcc
AR = ar -rc
RM = rm -f
FLAGS = -Wall -Wextra -Werror -I 
FILES = #file nassery
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