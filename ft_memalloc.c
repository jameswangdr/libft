/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 15:59:44 by jamwang           #+#    #+#             */
/*   Updated: 2019/03/05 18:27:51 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned int	i;
	char			*fresh;

	if (!(fresh = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		fresh[i] = 0;
		i++;
	}
	return (fresh);
}
