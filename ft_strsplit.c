/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 16:33:01 by jamwang           #+#    #+#             */
/*   Updated: 2019/02/27 20:26:40 by jamwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i + 1] == c)
			count++;
		if (str[i] != c && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

int				word_len(char *str, int i, char c)
{
	int		len;

	len = 0;
	while (str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int					i;
	char				**arr;
	unsigned int		j;
	int					k;

	if (s == NULL)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * word_count((char *)s, c) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count((char *)s, c))
	{
		if (s[i] != c)
		{
			arr[j] = malloc(sizeof(char) * (word_len((char *)s, i, c) + 1));
			k = 0;
			while (s[i] != c)
				arr[j][k++] = s[i++];
			arr[j++][k] = '\0';
		}
		i++;
	}
	arr[word_count((char *)s, c)] = NULL;
	return (arr);
}
