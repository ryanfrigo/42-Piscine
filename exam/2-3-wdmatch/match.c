/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:41:41 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/12 12:47:24 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	match(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while (s1[len])
		len++;
	while (*s2 && i < len)
	{
		if (*s2++ == s1[i])
			i++;
	}
	if (i == len)
		write(1, s1, len);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		match(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
