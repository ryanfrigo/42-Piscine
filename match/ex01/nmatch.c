/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:50:04 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/02 17:55:05 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int count;
	int star;

	count = 0;
	star = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return (count);
	if (*s1 == '\0' && *s2 == '*')
			return (match(s1, s2 + 1));
	if (*s2 == '*')
	{
		star = 1;
		return (match(s1 + 1, s2) +  match(s1, s2 + 1));
	}
	if (*s1 == *s2)
		if (star == 1)
		{
			count += 1;
			star = 0;
		}
		return (match(s1 + 1, s2 + 1));
	if (*s1 != *s2)
		return (0);
	return (-1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", match(argv[1], argv[2]));
	else
		return (-1);
}
