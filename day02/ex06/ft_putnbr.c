/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 21:41:30 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/23 23:08:01 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putnbr(int x)
{
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else if (x < 0)
	{
		x = -x;
		ft_putchar('-');
		ft_putnbr(x);
	}
	else
	{
		ft_putchar(x + '0');
	}
}
