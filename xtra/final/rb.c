/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 08:37:27 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/14 08:41:41 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	int i = 1;
	int x;
	char c;
	while (i <= 128)
	{
		x = ((c & i) ? 1 : 0);
		c + = x + '0';
		write(1, &x, 1);
		i *= 2;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	reverse_bits(15);
	return (0);

}
