/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:03:55 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/18 15:25:50 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*join_free(char *s1, const char *s2);
int		ft_strlen(const char *s);
void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*ft_strchr(char *str, int searchedChar);

#endif
