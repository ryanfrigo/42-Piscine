/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:22:28 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/31 16:35:02 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (str[i] == '+')
		{
			i++;
		}
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int		main(void)
{
	printf("%d", ft_atoi("-54383838"));
	return (0);
}
