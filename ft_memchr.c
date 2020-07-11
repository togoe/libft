/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctogoe <ctogoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:16:20 by ctogoe            #+#    #+#             */
/*   Updated: 2020/07/04 19:08:19 by ctogoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p_s;

	if (s == NULL && n == 0)
		return (NULL);
	p_s = (unsigned char *)s;
	while (n--)
	{
		if (*p_s != (unsigned char)c)
			p_s++;
		else
			return ((void *)p_s);
	}
	return (NULL);
}
