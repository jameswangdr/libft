/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:31:25 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/26 19:41:42 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = ft_strlen(dst);
	k = ft_strlen(src);
	if (dstsize <= i)
		return (k + dstsize);
	j = 0;
	while (dst[j] != '\0' && j < (dstsize - 1))
		j++;
	while (*src && j < (dstsize - 1))
	{
		dst[j] = *src;
		j++;
		src++;
	}
	dst[j] = '\0';
	return (i + k);
}
