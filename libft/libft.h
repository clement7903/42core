/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:27:22 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 12:27:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char		ft_toupper(char c);
char		ft_tolower(char c);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
void		ft_bzero(void *ptr, size_t size);
void		*ft_memchr(const void *ptr, int value, size_t num);
void		ft_memcpy(void *dst, const void *src, size_t num);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void		ft_memmove(void *dest, const void *src, size_t num);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strnstr(const char *hay, const char *needle, size_t search_len);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t num_elements, size_t element_size);
char		*ft_strdup(const char *source);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
