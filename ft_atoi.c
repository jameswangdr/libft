/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 15:50:55 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/26 21:28:47 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	long	result;
	int		counter;
	int		sign;

	result = 0;
	counter = 0;
	sign = 1;
	while (str[counter] < 27 || str[counter] == ' ')
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		result = (result * 10) + (str[counter] - '0');
		counter++;
	}
	result = result * sign;
	return ((int)result);
}
