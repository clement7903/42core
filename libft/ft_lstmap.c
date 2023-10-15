/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementng <clementng@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:38:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 09:33:51 by clementng        ###   ########.fr       */
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

static t_list	*static_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

static void	static_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	static_lstclear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}

static void	static_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = static_lstnew(set);
		if (!new_node)
		{
			del(set);
			static_lstclear(&new_lst, (*del));
			return (new_lst);
		}
		static_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
