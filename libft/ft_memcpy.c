/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:53:49 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 14:53:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_memcpy(void *dst, const void *src, size_t num)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	while (num > 0)
	{
		*d = *s;
		d++;
		s++;
		num--;
	}
}
