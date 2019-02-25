/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:47:52 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/25 11:50:29 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = nb;
	result = 1;
	if (nb <= 0 || nb >= 13)
	{
		return (0);
	}
	if (nb == 0)
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
