/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:48:36 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 10:48:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t search_len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return ((char *) hay);
	while (*hay && search_len >= needle_len)
	{
		while (hay[i] == needle[i])
		{
			if (i == needle_len - 1)
				return ((char *) hay);
			i++;
		}
		hay++;
		search_len--;
	}
	return (NULL);
}
