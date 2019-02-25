/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:36:53 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/05 14:23:56 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha(char *str)
{
	int i;
	int repeat;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			repeat = str[i] - 96;
			while (repeat > 0)
			{
				write(1, &str[i], 1);
				repeat--;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha(argv[1]);
	else
		write(1, "\n", 1);
}
