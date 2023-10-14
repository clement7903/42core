/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:25 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 00:33:18 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Functionality:
- finds a 1st occurence of particular char in string within num bytes
- if found, return pointer to that byte
- typecasted to unsigned char to prevent negative ascii value, 
- sign extension prob
*/

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	while (num--)
	{
		if (*(unsigned char *)ptr++ == (unsigned char)value)
			return ((void *)(unsigned char *)ptr - 1);
	}
	return (NULL);
}
