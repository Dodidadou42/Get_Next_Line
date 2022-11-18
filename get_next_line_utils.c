/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:03:39 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/18 15:35:33 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*join_free(char *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	while (s1[++i])
		ret[i] = s1[i];
	while (s2[++j])
		ret[i + j] = s2[j];
	ret[i + j] = '\0';
	free(s1);
	return (ret);
}

void	*ft_bzero(void *pt, size_t count)
{
	unsigned int	i;
	char			*pt_bis;

	pt_bis = pt;
	i = 0;
	while (i < count)
	{
		pt_bis[i] = '\0';
		i++;
	}
	return (pt);
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*ret;

	if (elementSize == SIZE_MAX && elementCount == SIZE_MAX)
		return (0);
	if (elementSize == 0 || elementCount == 0)
	{
		elementSize = 0;
		elementCount = 0;
	}
	ret = malloc(elementSize * elementCount);
	if (!ret)
	{
		free(ret);
		return (0);
	}
	ft_bzero(ret, elementCount * elementSize);
	return (ret);
}

char	*ft_strchr(char *str, int searchedChar)
{
	while (*str)
	{
		if (*str == (char)searchedChar)
			return ((char *)str);
		str++;
	}
	if ((char)searchedChar == '\0')
		return ((char *)str);
	return (0);
}
