/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:49:27 by mmamalek          #+#    #+#             */
/*   Updated: 2019/07/05 21:03:18 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
static char			*ft_strrealloc(char *s1, char *s2)
{
	char *new;

	new = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	return (new);
}
*/
static int			temp_check(char **temp, char **line, int end)
{
	char	*del_temp;
	char	*nlp;

	*line = ft_strnew(0);
	del_temp = *temp;
	nlp = ft_strchr(*temp, '\n');
	if (!nlp && ft_strlen(*temp) > 0)
	{
		*line = ft_strrealloc(*line, *temp);
		if (end == 0)
			ft_strdel(temp);
		return (1);
	}
	else if (nlp)
	{
		*nlp = '\0';
		*line = ft_strrealloc(*line, *temp);
		*temp = ft_strdup(nlp + 1);
		ft_strdel(&del_temp);
		if (**temp == '\0')
			ft_strdel(temp);
	}
	return (1);
}

static int			readfd(char **temp, const int fd)
{
	char		buff[BUFF_SIZE + 1];
	int			read_status;

	read_status = 0;
	if (!*temp)
	{
		if (!(*temp = ft_strnew(0)))
			return (-1);
	}
	if (!ft_strchr(*temp, '\n'))
	{
		while ((read_status = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[read_status] = '\0';
			if (!(*temp = ft_strrealloc(*temp, buff)))
				return (-1);
			if (ft_strchr(buff, '\n'))
				break ;
		}
	}
	return (read_status);
}

int					get_next_line(const int fd, char **line)
{
	static char		*tmp;
	int				read_status;

	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);
	read_status = readfd(&tmp, fd);
	if (read_status < 0)
		return (-1);
	if (read_status == 0 && (!tmp || !*tmp))
		return (0);
	return (temp_check(&tmp, &*line, read_status));
}
