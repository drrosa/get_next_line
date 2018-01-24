/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:35:39 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/07 12:06:21 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long i;
	unsigned long j;
	unsigned long size;

	i = 0;
	j = 0;
	size = 0;
	while (little[size])
		size++;
	if (size == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		while (i + j < len && little[j] == big[i + j])
		{
			if (j == size - 1)
				return ((char *)(big + i));
			j++;
		}
		if (i + j + 1 == len)
			return (NULL);
		j = 0;
		i++;
	}
	return (NULL);
}
