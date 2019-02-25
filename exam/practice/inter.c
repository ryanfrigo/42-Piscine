/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:46:29 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/12 15:55:31 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inter(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while (s1[len])
		len++;
	while (*s2 && i < len)
	{
		if (s1[i] == *s2++)
			i++;
	}
	if (i == len)
		write(1, s1, len);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
