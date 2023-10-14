/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:48:36 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 00:45:57 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Functionality:
- gets a pointer to a hay, pointer to a substring needle, search_len within hay
- if hay & search_len doesnt exist, return NULL
- if needle is empty, return hay pointer
- while hay pointer is not null && search_len not -1
- while char is same in hay && needle | needle is not null | havent exceed
- if next char in needle is NULL, return hay pointer
- else: continue iterating through to next char
*/

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t search_len)
{
	size_t	i;

	if (!hay && !search_len)
		return (NULL);
	if (!*needle)
		return ((char *) hay);
	while (*hay && search_len--)
	{
		i = 0;
		while (*(hay + i) == *(needle + i)
			&& *(needle + i) && i <= search_len)
		{
			if (!*(needle + i + 1))
				return ((char *)hay);
			i++;
		}
		hay++;
	}
	return (NULL);
}
