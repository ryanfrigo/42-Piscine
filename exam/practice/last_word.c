/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:39:15 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/12 15:42:28 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_last_word(char *str)
{
	while (*str)
		str++;
	str--;
	while (*str && ft_is_blank(*str))
		str--;
	while (*str && !ft_is_blank(*str))
		str--;
	str++;
	while (*str && !ft_is_blank(*str))
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
