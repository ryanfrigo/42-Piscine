/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 20:03:52 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/13 21:13:33 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sar(char *str, char s, char r)
{
	while (*str)
	{
		(*str == s) ? write(1, &r, 1) : write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
		sar(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
