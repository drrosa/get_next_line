/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:17:44 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/14 16:27:01 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*src_str;
	unsigned char		*dst_str;

	src_str = src;
	dst_str = dst;
	while (n--)
		*dst_str++ = *src_str++;
	return (dst);
}
