/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctogoe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 18:50:41 by ctogoe            #+#    #+#             */
/*   Updated: 2020/07/10 00:51:36 by ctogoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	if (!s || !(new_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (ft_strlen(s) < start)
	{
		new_s[0] = '\0';
		return (new_s);
	}
	i = 0;
	while (i < len && s[start])
	{
		new_s[i] = s[start];
		start++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
