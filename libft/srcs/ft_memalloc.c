/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:19:18 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/08 15:38:42 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned long	i;
	void			*ptr;

	ptr = malloc(sizeof(ptr) * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*((int *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
