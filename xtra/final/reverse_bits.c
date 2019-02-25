/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 22:21:25 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/13 22:46:16 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char c)
{
	int i = 128;
	int x;
	char ch;
	while (i >= 1)
	{
		x = ((c & i) ? 1 : 0);
		ch = x + '0';
		write(1, &ch, 1);
		i /= 2;
	}
	write(1, "\n", 1);
}

void	reverse_bits(unsigned char c)
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
	write(1, "\n", 1);
}

int		main(void)
{
	print_bits(15);
	reverse_bits(15);
}
