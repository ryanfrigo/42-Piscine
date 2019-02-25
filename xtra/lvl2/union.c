/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:29:58 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/07 15:41:38 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_seen_before(char *s, int pos, char c)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (not_seen_before(s1, i, s2[j]) && not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
