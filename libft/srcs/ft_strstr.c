/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:35:39 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/12/06 16:01:09 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	unsigned long i;
	unsigned long j;
	unsigned long size;

	i = 0;
	j = 0;
	size = 0;
	while (little[size])
		size++;
	if (size == 0)
		return ((char *)big);
	while (big[i])
	{
		while (little[j] == big[i + j])
		{
			if (j == size - 1)
				return ((char *)(big + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
