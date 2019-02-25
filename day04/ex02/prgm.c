/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:52:40 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/25 13:01:34 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = power;
	result = 1;
	if (i < 0)
	{
		return (0);
	}
	else
	{
		while (i >= 1)
		{
			result *= nb;
			i--;
		}
		return (result);
	}
}

int		main(void)
{
	printf("%d", ft_iterative_power(-5, 3));
	return (0);
}
