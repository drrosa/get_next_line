/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 21:42:05 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/16 21:33:56 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	split(const char *str, char **ptr, char c)
{
	int i;
	int j;
	int n;
	int k;

	i = 0;
	j = 0;
	k = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == c || !str[i + 1])
		{
			n = i - k;
			ptr[j] = ft_strnew(n + 1);
			k = -1;
			while (++k < n + 1)
				ptr[j][k] = (char)str[(i - n) + k];
			i++;
			k = i + 1;
			j++;
		}
		if (str[i])
			i++;
	}
}

static int	ft_strcleanup(char const *str, char *result, char c)
{
	int i;
	int j;
	int wc;

	i = 0;
	j = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] && str[i] != c)
			result[j++] = str[i++];
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			result[j++] = c;
			wc++;
		}
	}
	result[j] = '\0';
	return (wc + 1);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**ptr;
	char	*temp;
	int		size;

	if (!str)
		return (NULL);
	temp = ft_strnew(ft_strlen(str));
	if (!temp)
		return (NULL);
	size = ft_strcleanup(str, temp, c);
	ptr = (char **)malloc(sizeof(char *) * (size + 1));
	ptr[size] = 0;
	if (!ptr)
		return (NULL);
	if (str[0] == '\0' || (size == 1 && temp[0] == '\0'))
		ptr[0] = 0;
	else if (size == 1 && ft_strlen(str) > 0)
		ptr[0] = temp;
	else
		split(temp, ptr, c);
	return (ptr);
}
