/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 13:13:48 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/27 15:04:12 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		back;
	char	tmp;

	i = 0;
	back = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (back < i - 1)
	{
		tmp = str[i - 1];
		str[i - 1] = str[back];
		str[back] = tmp;
		i--;
		back++;
	}
	return (str);
}
