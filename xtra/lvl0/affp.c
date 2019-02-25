/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:03:04 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/24 16:27:01 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i;
	char contains_a;

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
		aff_a(argv[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
}
