/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 17:33:22 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/16 16:50:41 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current_node;
	t_list	*result;

	if (!lst)
		return (NULL);
	current_node = f(lst);
	result = current_node;
	while (lst->next)
	{
		lst = lst->next;
		current_node->next = f(lst);
		current_node = current_node->next;
	}
	return (result);
}
