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
