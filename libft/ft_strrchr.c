/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:26:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 01:03:55 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*last;

	last = NULL;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			last = str;
		}
		str++;
	}
	return ((char*) last);
}
