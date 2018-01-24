/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:00:46 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/08 18:41:40 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	long	i;
	long	j;
	long	n;
	size_t	dst_length;

	dst_length = ft_strlen(dst);
	n = dst_size - dst_length - 1;
	j = dst_length;
	i = 0;
	while (i < n && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	if (dst_length > dst_size)
		return (ft_strlen(src) + dst_size);
	return (ft_strlen(src) + dst_length);
}
