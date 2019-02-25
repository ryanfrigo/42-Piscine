/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:54:11 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/31 15:07:27 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2 && argv[1][i] != '\0')
	{
		while (argv[1][i] != '\0' && argv[1][i] == ' ' && argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}

