# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files - either specify all or wildcard *.c
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_memchr.c ft_memcpy.c ft_memcmp \
		ft_toupper.c ft_tolower.c \
		ft_strncmp.c \
		ft_bzero.c \

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = libft.a

RM = rm -rf

all: $(TARGET)

# target depends on objects
$(TARGET):	$(OBJS)
	ar rcs $(TARGET) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(TARGET)

re:		fclean all

.PHONY: all clean fclean re
