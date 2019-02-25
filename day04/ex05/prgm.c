/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 13:54:22 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/25 14:00:06 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int root;

	root = 1;
	while (root * root != nb)
	{
		if (root * root > nb)
		{
			break ;
		}
		root++;
	}
	if (root * root == nb)
	{
		return (root);
	}
	else
	{
		return (0);
	}
}


int		main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}
