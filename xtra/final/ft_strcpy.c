/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:07:53 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/13 10:15:18 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}

#include <stdio.h>

int		main(void)
{
	char a[] = "bob";
	char b[] = "pop";

	printf("%s", a);
	ft_strcpy(a, b);
	printf("%s", b);
	return (0);
}
