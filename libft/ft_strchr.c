/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:04:55 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 11:04:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return ((char *) ptr); 
		}
		ptr++; 
	}
	return (NULL);
}
