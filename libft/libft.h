#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

// Header file contents go here
int			ft_isalpha(int c);
int			ft_isdigit(char c);
int			ft_isalnum(char c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *pointer, int c, size_t num);
char		ft_toupper(char c)


#endif
