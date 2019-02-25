/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:29:37 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/31 11:49:37 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *ampm;

	if (hour >= 0 && hour < 12)
		ampm = "A.M.";
	else
		ampm = "P.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%i", hour);
	printf(".00 %s", ampm);
	printf(" AND %i ", hour + 1);
	printf(".00 %s", ampm);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_takes_place(ft_atoi(argv[1]));
	}
	return (0);
}
