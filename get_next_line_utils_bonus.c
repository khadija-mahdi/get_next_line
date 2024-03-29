/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:21:45 by kmahdi            #+#    #+#             */
/*   Updated: 2022/11/30 15:21:25 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*j;

	j = (char *)s;
	i = 0;
	while (j[i])
	{
		if (j[i] == (char)c)
		{
			return (j + i);
		}
		i++;
	}
	if ((char) c == '\0')
		return (j + i);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*j;

	if (!s1)
		s1 = ft_calloc(1, 1);
	if (!s2 || s2[0] == 0)
		return (s1);
	i = 0;
	j = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!j)
		return (NULL);
	while (s1[i])
	{
		j[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	j[ft_strlen(s1) + i] = '\0';
	free(s1);
	return (j);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*j;

	j = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		j[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count && size > SIZE_MAX)
		return (0);
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero (s, count * size);
	return (s);
}
