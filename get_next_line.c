/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 23:03:30 by drosa-ta          #+#    #+#             */
/*   Updated: 2018/01/26 16:46:08 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_file_to_str(const int fd, char **str)
{
	char	buffer[BUFF_SIZE + 1];
	int		ret;
	char	*tmp;

	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		if (!*str)
			*str = ft_strdup(buffer);
		else
		{
			tmp = *str;
			*str = ft_strjoin(*str, buffer);
			free(tmp);
		}
	}
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	static char *fd_list[MAX_FD];
	int			ret;
	char		*str;

	if (fd < 0 || fd > MAX_FD || !line)
		return (-1);
	if ((ret = ft_file_to_str(fd, &fd_list[fd]) < 0))
		return (-1);
	if (ret == 0)
	{
		*line = NULL;
		return (0);
	}
	if ((str = ft_strchr(fd_list[fd], '\n')))
	{
		*str = '\0';
		*line = fd_list[fd];
		fd_list[fd] = ft_strdup(++str);
		return (1);
	}
	*line = fd_list[fd];
	fd_list[fd] = NULL;
	return (**line != '\0');
}
