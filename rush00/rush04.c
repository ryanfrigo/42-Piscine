/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:16:54 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/26 17:09:40 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0)
			{
				if (i == 0)
					ft_putchar('A');
				else if (i == x - 1)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (j == y - 1)
			{
				if (i == 0)
					ft_putchar('C');
				else if (i == x - 1)
					ft_putchar('A');
				else
					ft_putchar('B');
			}
			else
			{
				if (i == 0 || i == x - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
