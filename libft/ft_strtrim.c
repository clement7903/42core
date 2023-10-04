/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:32:01 by marvin            #+#    #+#             */
/*   Updated: 2023/10/04 12:32:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
PURPOSE: 
This function removes leading and 
trailing characters from a string based on 
a given set of characters
PARAMS: 
s1 - pointer to the string to be trimmed, 
set - pointer to the set of characters to be trimmed.
*/

static size_t	check_chr(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*create_str(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && check_chr(set, *(s1 + start)))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_chr(set, *(s1 + (end - 1))))
		end--;
	trimmed_str = create_str(end - start);
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(trimmed_str + i) = *(s1 + (start + i));
		i++;
	}
	*(trimmed_str + i) = '\0';
	return (trimmed_str);
}
