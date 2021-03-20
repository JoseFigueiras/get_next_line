/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfigueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:35:42 by jfigueir          #+#    #+#             */
/*   Updated: 2021/03/20 16:35:44 by jfigueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
int		has_nl(char *str);
char	*join_str(const char *str1, const char *str2);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
