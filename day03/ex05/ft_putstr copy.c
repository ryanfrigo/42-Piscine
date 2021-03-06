/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:37:00 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/23 12:58:19 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int p;
	p = 0;
	while (str[p])
	{
		ft_putchar(str[p]);
		p++;
	}
}

int main(void)
{
	ft_putstr("ryan");
	return(0);
}
