/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:04:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 10:50:31 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	const char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return ((char *) ptr);
		}
		ptr++;
	}
	return (NULL);
}
