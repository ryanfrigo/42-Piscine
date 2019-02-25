/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:44:16 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/24 15:51:06 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff_a(char *str)
{
	int		i;
	char	contains_a;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			contains_a = 'y';
		}
		i++;
	}
	if (contains_a == 'y')
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
}
