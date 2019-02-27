/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 15:57:44 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/26 19:48:59 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_of(int n)
{
	int size;

	size = 0;
	if (n == 0)
		size = 1;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		size = size_of(n) + 1;
	else
		size = size_of(n);
	if (!(s = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[size--] = '\0';
	if (n == 0)
		s[size] = n % 10 + '0';
	while (n >= 1)
	{
		s[size--] = n % 10 + '0';
		n = n / 10;
	}
	return (s);
}
