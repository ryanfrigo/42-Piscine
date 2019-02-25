/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:35:41 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/07 14:59:54 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n' || *str == '\r' || *str == '\f')	
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
		sign = -1;
	while (*str >= '0' && *str < 10)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int		main(int argc, char **argv)
{
		printf("%d", atoi(argv[1]));
}
