/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:09:18 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 00:25:59 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Functionality:
- compare both strings using pointers till size is reached
- uses unsigned char to have wider positive value range - 0 to 255
*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while (*str1 && *str2 && n > 1 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	return (((unsigned char)(*str1) - (unsigned char)(*str2)));
}
