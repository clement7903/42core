/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:53:49 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 11:07:33 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	void	*d;

	d = dst;
	if (!dst && !src)
		return (dst);
	while (num > 0)
	{
		*(char *)dst++ = *(char *)src++;
		num--;
	}
	return (d);
}
