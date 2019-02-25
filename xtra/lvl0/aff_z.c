/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:51:20 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/24 15:57:55 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char *str;
	int i;

	i = 0;
	str = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
