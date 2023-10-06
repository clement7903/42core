/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:38:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 20:38:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
PURPOSE: applies a given func to each element of existing lst
			transformed elements used to form a new lst
- accepts a pointer to 1st element of lst
- accepts a pointer to a 'f' function
- accepts a pointer to a 'del' function
- checks if any pointers are null, return NULL
- calls 'f' func on the element's content
- the transformed content is used to create a new element
- if memory allocation fails, 
	delete the transformed content
	clear the already created elements in the new_list
- else add the new_node to the back of the new_list
- iterate to the next element in the lst.
- returns the newly created lst
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
