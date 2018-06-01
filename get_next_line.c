/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:40:50 by cooswold          #+#    #+#             */
/*   Updated: 2018/06/01 00:38:56 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int		check_string(const int fd, char **str, char **line)
{
	int		i;
	char	*temp;

	i = 0;
	while (str[fd][i] != '\0' && str[fd][i] != '\n')
		i++;
	*line = ft_strsub(str[fd], 0, i);
	temp = str[fd];
	if (temp[i] == '\n')
	{
		str[fd] = ft_strsub(str[fd], i + 1, ft_strlen(str[fd]) - i);
		ft_strdel(&temp);
		return (1);
	}
	ft_strdel(&str[fd]);
	return (0);
}

int		find(int fd, char **line, int ret, char **str)
{
	int		i;
	char	buff[BUFF_SIZE + 1];
	char	*temp;
	char	*temp2;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		i = 0;
		while (buff[i] != '\n' && buff[i] != '\0')
			i++;
		temp = *line;
		temp2 = ft_strsub(buff, 0, i);
		*line = ft_strjoin(*line, temp2);
		free(temp);
		free(temp2);
		if (buff[i] == '\n')
		{
			str[fd] = ft_strsub(buff, i + 1, BUFF_SIZE - i);
			return (1);
		}
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char		**str;
	int				ret;
	char			buff[BUFF_SIZE + 1];

	ret = read(fd, buff, 0);
	if (ret == -1 || line == NULL || fd < 0)
		return (-1);
	if (str == NULL)
		str = (char**)malloc(sizeof(char*) * 5000);
	*line = ft_strnew(0);
	if (str[fd] != NULL)
	{
		if (check_string(fd, str, line) == 1)
			return (1);
	}
	if (find(fd, line, ret, str) == 1)
		return (1);
	if (*line[0] != '\0')
		return (1);
	return (0);
}
