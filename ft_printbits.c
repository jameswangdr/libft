/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 12:21:04 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/27 13:26:07 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbits(unsigned char octet)
{
	unsigned char count;

	count = 128;
	while (count > 0)
	{
		if (octet > count)
		{
			octet = octet - count;
			count = count / 2;
			write(1, "1", 1);
		}
		else
		{
			count = count / 2;
			write(1, "0", 1);
		}
	}
}
