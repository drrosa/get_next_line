/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 22:25:19 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/06 15:45:29 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s1[size])
		size++;
	dst = (char*)malloc(sizeof(*dst) * size + 1);
	if (dst != NULL)
	{
		while (s1[i])
		{
			dst[i] = s1[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
