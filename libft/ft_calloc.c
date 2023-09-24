/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:12:03 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 23:12:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*memory;
	char	*current;

	total_size = num_elements * element_size;
	memory = malloc(total_size);
	if (memory == NULL)
		return (NULL);
	current = (char *)memory;
	while (total_size > 0)
	{
		*current = 0;
		current++;
		total_size--;
	}
	return (memory);
}
