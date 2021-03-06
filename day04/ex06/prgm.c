/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:06:44 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/25 14:25:44 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int max;

	i = 2;
	max = 2147483647;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb < max && (nb / 2) >= i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	printf("%d", ft_is_prime(7));
	printf("%s", "\n");
	printf("%d", ft_is_prime(8));
	return (0);
}
