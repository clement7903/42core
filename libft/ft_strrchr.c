/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:26:16 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 11:26:16 by marvin           ###   ########.fr       */
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
	return (last);
}
