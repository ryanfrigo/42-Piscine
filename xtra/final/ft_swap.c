/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 21:20:44 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/13 22:07:47 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_reverse(unsigned char c)
{
	int i = 1;
	int x;
	char ch;
	while (i <= 128)
	{
		x = ((c & i) ? 1 : 0);
		ch = x + '0';
		write(1, &ch, 1);
		i *= 2;
	}
	write (1, "\n", 1);
}

void	ft_print_bits(unsigned char c)
{
	int i = 128;
	int x;
	char ch;
	while (i >= 1)
	{
		x = ((c & i) ? 1 : 0);
		ch = x + '0';
		write(1, &ch, 1);
		i/=2;
	}
}
int		main(void)
{
	ft_reverse(15);
	ft_print_bits(15);
}
