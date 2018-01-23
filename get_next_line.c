/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <drosa-ta@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 23:03:30 by drosa-ta          #+#    #+#             */
/*   Updated: 2018/01/22 23:03:39 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int		ft_file_len(const int fd)
{
	size_t	n;
	int		fd;
	char	buf[BUFF_SIZE];
	int		is_eof;

	n = 0;
	is_eof = 0;
	if (fd == -1)
		return (0);
	while ((is_eof = read(fd, buf, BUFF_SIZE)))
		n = is_eof + n;
	close(fd);
	return (n + 1);
}

char	*ft_file_to_str(const int fd)
{
	int		fd;
	char	*str;
	int		ret;
	int 	n;

	n = ft_file_len(fd);
	str = (char*)malloc(sizeof(char) * (n));
	if (!str || fd == -1)
		return (0);
	ret = read(fd, str, n);
	if (ret == -1 || (!ret && n == 0))
		return (0);
	str[n] = '\0';
	close(fd);
	return (str);
}

int get_next_line(const int fd, char **line)
{
	static char *fd_list[MAX_FD];

	fd_list[fd] = ft_file_to_str(fd);


	return(0);
}
