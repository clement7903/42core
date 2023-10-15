/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:26:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 09:36:48 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(source);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = source[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
