/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctogoe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 17:57:51 by ctogoe            #+#    #+#             */
/*   Updated: 2020/07/04 18:33:11 by ctogoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = ((void *)malloc(size * count));
	if (!ptr)
		return (0);
	else
		ft_memset(ptr, '\0', (count * size));
	return (ptr);
}
