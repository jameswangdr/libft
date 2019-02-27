/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:10:58 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/26 16:43:44 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*s1;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
