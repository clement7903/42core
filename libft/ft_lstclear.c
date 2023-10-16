/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:16:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 21:53:24 by clementng        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PURPOSE:
- accepts a pointer to pointer of the 1st element of a list
- accepts a pointer to a 'del' function
- checks 
	if list pointer is invalid
	if the del func is invalid
	if the lst element is null aka. lst is empty
		return nothing
- recursively 
		on the 'next' pointer of the current element
- calls 'del' func on the element's content
- frees element mem.
- set element to null
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_list;
	t_list	*next_list;

	if (!lst)
		return ;
	tmp_list = *lst;
	while (tmp_list)
	{
		next_list = tmp_list->next;
		ft_lstdelone(tmp_list, del);
		tmp_list = next_list;
	}
	*lst = NULL;
}
