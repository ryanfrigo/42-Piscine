/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 19:40:02 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/13 20:02:26 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int count;

	if (c >= 'a' && c <= 'z')
		count = c - 'a';
	if (c >= 'A' && c <= 'Z')
		count = c - 'A';
	return (count);
}

void	repeat_alpha(char *str)
{
	int count;

	while (*str)
	{
		count = (letter_count(*str));
		while (count >= 0)
		{
			write(1, str, 1);
			count--;
		}
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
