/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:05:21 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 15:05:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s)
	{
		ft_memcpy(d, s, num);
	}
	else if (d > s)
	{
		d += num;
		s += num;
		while (num > 0)
		{
			d--;
			s--;
			*d = *s;
			num--;
		}
	}
}
