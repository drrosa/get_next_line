/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:17:44 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/14 17:26:47 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*src_str;
	unsigned const char		*dst_str;

	src_str = (unsigned const char *)s1;
	dst_str = (unsigned const char *)s2;
	while (n--)
	{
		if (*dst_str != *src_str)
			return (*src_str - *dst_str);
		dst_str++;
		src_str++;
	}
	return (0);
}
