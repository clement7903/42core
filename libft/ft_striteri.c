/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:43:47 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 11:43:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PURPOSE:
- takes a string & function
- applies the function to each char
- index is incremented with each iteration
- pointer to the char is incremented 
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}