/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:15:30 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/30 20:48:00 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str, int i)
{
	int		len;

	len = 0;
	while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
	{
		i++;
		len++;
	}
	return (len);
}

int		ft_word_count(char *str)
{
	int		i;
	int		wc;
	int		isword;

	i = 0;
	wc = 0;
	isword = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			isword = 0;
		else if (isword == 0)
		{
			isword = 1;
			wc++;
		}
		i++;
	}
	return (wc);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**arr;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_word_count(str) + 1));
	while (str[i])
	{
		k = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (!str[i])
			break ;
		arr[j] = (char *)malloc(sizeof(char) * (ft_strlen(str, i) + 1) + 1);
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			arr[j][k++] = str[i++];
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = 0;
	return (arr);
}
