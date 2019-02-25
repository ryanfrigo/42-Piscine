/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:31:22 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/30 15:14:09 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*duplicate;

	len = 0;
	while (src[len])
		len++;
	duplicate = (char*)malloc(sizeof(*duplicate) * (len + 1));
	duplicate = ft_strcpy(duplicate, src);
	return (duplicate);
}
