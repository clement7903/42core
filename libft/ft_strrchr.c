/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:26:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 10:05:06 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int ch)
{
	char const	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char)ch)
			ptr = str;
		str++;
	}
	if (*str == (char)ch)
		return ((char *)str);
	else
		return ((char *)ptr);
}
