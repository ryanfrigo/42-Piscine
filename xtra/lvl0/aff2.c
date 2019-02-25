/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 13:20:06 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/31 13:36:07 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff(char *str)
{
	int i;
	int a;

	a = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			a = 1;		
		}
		i++;
	}
	if (a == 1)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff(argv[1]);
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
}
