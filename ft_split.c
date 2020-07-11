/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctogoe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 02:16:57 by ctogoe            #+#    #+#             */
/*   Updated: 2020/07/04 20:00:45 by ctogoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		**freeline(char **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static int		line_nbr(char const *s, char c)
{
	int i;
	int nline;

	i = 0;
	nline = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			nline++;
		i++;
	}
	return (nline);
}

static char		*fill_c_line(char const *s, char c)
{
	int		i;
	char	*line;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(line = malloc(sizeof(line) * i + 1)))
	{
		free(line);
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != c)
	{
		line[i] = s[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		line;

	if (!s)
		return (NULL);
	i = 0;
	line = line_nbr(s, c);
	if (!(tab = malloc(sizeof(*tab) * line + 1)))
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(tab[i] = fill_c_line(s, c)))
				return (freeline(tab, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
