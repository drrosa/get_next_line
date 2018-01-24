/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 21:53:25 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/10 18:34:45 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	unsigned long	i;
	unsigned long	n;
	unsigned long	j;
	char			*str;

	if (!s || (str = (char *)malloc(sizeof(char))) == 0)
		return (NULL);
	str[0] = '\0';
	if (*s == '\0')
		return (str);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	n = ft_strlen(s) - 1;
	if (i >= n)
		return (str);
	while (s[n] == ' ' || s[n] == '\n' || s[n] == '\t')
		n--;
	n = n - i;
	if (!(str = ft_strnew(n + 1)))
		return (NULL);
	j = 0;
	while (j <= n)
		str[j++] = s[i++];
	return (str);
}
