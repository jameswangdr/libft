/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:13:23 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/27 19:45:21 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dst1;
	char			*src1;

	if (src == dst)
		return (dst);
	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dst1[i] = src1[i];
	}
	else
	{
		i = 0;
		while (len > i)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
