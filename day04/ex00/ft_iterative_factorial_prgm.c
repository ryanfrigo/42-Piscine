/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:53:34 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/25 11:21:39 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int x)
{
	int i;
	int result;

	i = x;
	result = 1;
	if (x <= 0 || x >= 13)
	{
		return (0);
	}
	if (x == 0)
	{
		return (1);
	}
	else
	{
		while (i > 1)
		{
			result *= i;
			i--;
		}
		return (result);
	}
}

int 	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
