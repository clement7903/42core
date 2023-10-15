/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:16:23 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 09:43:37 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int c, size_t num)
{
	void	*p;

	p = pointer;
	while (num--)
		*(unsigned char *)pointer++ = (unsigned char)c;
	return (p);
}
