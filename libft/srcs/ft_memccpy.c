/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:17:44 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/14 16:45:38 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char		*src_str;
	unsigned char			*dst_str;
	unsigned char			ch;

	src_str = (unsigned const char *)src;
	dst_str = (unsigned char *)dst;
	ch = (unsigned char)c;
	while (n--)
	{
		if ((*dst_str++ = *src_str++) == ch)
			return ((void *)dst_str);
	}
	return (NULL);
}
