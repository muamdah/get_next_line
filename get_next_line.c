/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:59:26 by muamdah           #+#    #+#             */
/*   Updated: 2018/03/13 11:52:57 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*str[OPEN_MAX];
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	int			ret;
/*==============================================================================================*\																				             |
|        [ 1 ]                   Parse de toute les erreurs possibles                            |
\*==============================================================================================*/
	if (fd < 0 || read(fd, "", 0) < 0 || line == NULL || fd > OPEN_MAX)
		return (-1);
/* ---------------------------initialiser la STATIC pour le 1er passage -----------------------*/
	if (!str[fd])
		str[fd] = ft_strnew(1);
/*===============================================================================================*\																								  |
|        [ 2 ]     Lecture du fichier jusqu'a un '\n' + Verif que RET n'est pas null              |
\*===============================================================================================*/
	while (!(ft_strchr(str[fd], '\n')) && (ret = read(fd, buf, BUFF_SIZE)))
	{
/* ------------------insertion du BUFF dans tmp reporté dans la STATIC ------------------------*/
		buf[ret] = '\0';
		tmp = ft_strjoin(str[fd], buf);
/* ---------------------------LEAKS = écrase les fuites memoires ------------------------------*/
		ft_strdel(&str[fd]);
		str[fd] = tmp;
	}
/*===============================================================================================*\																								  |
|        [ 3 ]                     Insertion de la phrase dans *line                              |
\*===============================================================================================*/
	if (ft_strlen(str[fd]) == 0)
		return (0);
	*line = ft_strsub(str[fd], 0, ft_strnlen(str[fd], '\n'));
/* ----------Recupération du reste apres '\n' dans tmp reporté dans la STATIC -----------------*/
	tmp = ft_strsub(str[fd], ft_strnlen(str[fd], '\n') + 1,
			ft_strlen(&str[fd][ft_strnlen(str[fd], '\n')]));
/* ---------------------------LEAKS = écrase les fuites memoires ------------------------------*/
	ft_strdel(&str[fd]);
	str[fd] = tmp;
	return (1);
}
