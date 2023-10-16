/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:38:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 22:24:55 by clementng        ###   ########.fr       */
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
	clear the already created elements in the new_lst
- else add the new_node to the back of the new_lst
- iterate to the next element in the lst.
- returns the newly created lst
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_lst;
	t_list	*output_lst;

	if (!lst || !f || !del)
		return (NULL);
	tmp_lst = ft_lstnew(f(lst->content));
	if (!tmp_lst)
		return (NULL);
	output_lst = tmp_lst;
	lst = lst->next;
	while (lst)
	{
		tmp_lst->next = ft_lstnew(f(lst->content));
		if (!tmp_lst->next)
		{
			ft_lstclear(&output_lst, del);
			return (NULL);
		}
		tmp_lst = tmp_lst->next;
		lst = lst->next;
	}
	tmp_lst->next = NULL;
	return (output_lst);
}
