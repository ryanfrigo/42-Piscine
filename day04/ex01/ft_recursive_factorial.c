/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:38:10 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/25 11:45:09 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb >= 1 && nb <= 12)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
