/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:04:30 by jamwang           #+#    #+#             */
/*   Updated: 2019/03/05 18:28:00 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*dst1;
	char			*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	while (n > i)
	{
		dst1[i] = src1[i];
		if (src1[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
