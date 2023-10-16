/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:05:21 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 21:30:30 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Functionality:
- takes in a dst, src pointers & moves num of bytes over
- if either of the pointers are null --> return dst pointer
- if they are the same --> no need for copying --> return dst
- 0 1 2 3 4 5
- a b c d e f
- if dst is behind src --> copy from back (back of src not needed later)
- [src] 
	[dst]
- if dst is in front of src --> copy from front (front of src not needed)
- [dst] 
	[src]
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	void		*d;

	d = dst;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (num--)
			((char *)dst)[num] = ((char *)src)[num];
	}
	else
	{
		while (num--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	return (d);
}
