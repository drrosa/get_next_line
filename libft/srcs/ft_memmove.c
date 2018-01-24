/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:17:44 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/14 17:08:59 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*src_str;
	unsigned char		*dst_str;
	long				len;

	src_str = (unsigned const char *)src;
	dst_str = (unsigned char *)dst;
	len = n;
	if (src_str < dst_str)
		while (--len > -1)
			dst_str[len] = src_str[len];
	else
		while (n--)
			*dst_str++ = *src_str++;
	return (dst);
}
