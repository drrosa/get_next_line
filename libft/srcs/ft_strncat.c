/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:00:46 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/06 15:27:57 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	size_t			size;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	while (i < n && s2[i])
	{
		s1[size] = s2[i];
		size++;
		i++;
	}
	s1[size] = '\0';
	return (s1);
}
