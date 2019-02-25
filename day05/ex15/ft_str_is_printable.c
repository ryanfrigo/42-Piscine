/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:25:07 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/28 23:25:47 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int is_print;

	i = 0;
	is_print = 0;
	if (!str[i])
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			is_print = 1;
		}
		else
			return (0);
		i++;
	}
	return (is_print);
}
