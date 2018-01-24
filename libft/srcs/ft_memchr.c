/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:17:44 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/14 17:14:18 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char		*src_str;
	unsigned char			ch;

	src_str = (unsigned const char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*src_str == ch)
			return ((void *)src_str);
		src_str++;
	}
	return (NULL);
}
