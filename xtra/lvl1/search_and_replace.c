/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:24:58 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/05 14:38:30 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sar(char *str, char *l, char *r)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == *l)
			str[i] = *r;
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		sar(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return (0);
}
