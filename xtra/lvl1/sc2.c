/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sc2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:16:03 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/31 16:21:47 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(int argc, char **argv)
{
	printf("%s", argv[1]);
	ft_strcpy(argv[1], argv[2]);
	printf("%s", argv[1]);
	return (0);
}
