/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctogoe <ctogoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:07:30 by ctogoe            #+#    #+#             */
/*   Updated: 2020/07/04 18:32:55 by ctogoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_size(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr >= 10)
	{
		nbr /= 10;
		i++;
	}
	return (++i);
}

char			*ft_itoa(int n)
{
	int				i;
	unsigned int	nbr;
	char			*str;

	i = 0;
	if (n < 0)
	{
		nbr = n * -1;
		i = 1;
	}
	if (n >= 0)
		nbr = n;
	i += ft_count_size(nbr);
	if (!(str = (char *)malloc(sizeof(char) * i + 1)))
		return (0);
	str[i] = '\0';
	while (i--)
	{
		if (nbr >= 0)
			str[i] = (nbr % 10) + '0';
		if (i == 0 && n < 0)
			str[i] = '-';
		nbr /= 10;
	}
	return (str);
}
