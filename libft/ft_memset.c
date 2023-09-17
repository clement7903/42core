/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:16:23 by marvin            #+#    #+#             */
/*   Updated: 2023/09/17 22:16:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *pointer, int c, size_t num)
{
	char	*p;

	if (!pointer)
	{
		return (NULL);
	}
	p = (char *)pointer;
	while (num > 0)
	{
		*p = c;
		p++;
		num--;
	}
	return (pointer);
}
