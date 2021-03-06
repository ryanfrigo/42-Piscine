/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:12:35 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/23 12:36:09 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;

	printf("%d", *a);
	printf("%d", *b);
}

int		main(void)
{
	int a;
	int b;
	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return(0);
}