/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 09:51:56 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/01 12:49:59 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	int		i;
	int		j;
	int		match;

	i = 0;
	j = 0;
	match = 1;
	if ((s1[i] && s2[j] == '\0') || (s2[j] && s1[i] == '\0'))
		return (0);
	while (s1[i] && s2[j])
	{
		while (s2[j] == '*')
		{
			if (s2[j + 1] == '\0')
				return (1);
			else
			{
				while (s1[i] != s2[j + 1])
					i++;
				j++;
			}
		}
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s2[j] != '*' && s1[i] != s2[j])
		{
			match = 0;
			i++;
			j++;
		}
	}
	return (match);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", match(argv[1], argv[2]));
	}
	else
		return (0);
}
