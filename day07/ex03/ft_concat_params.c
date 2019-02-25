/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:35:17 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/30 15:47:58 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		arg;
	int		i;
	int		chaar;
	int		mem;
	char	*args;

	mem = 0;
	arg = 1;
	i = 0;
	while (arg < argc)
	{
		mem += ft_strlen(argv[arg++]) + 1;
	}
	args = (char*)malloc(sizeof(char) * mem);
	arg = 1;
	while (arg < argc)
	{
		chaar = 0;
		while (argv[arg][chaar])
			args[i++] = argv[arg][chaar++];
		if (argv[arg + 1])
			args[i++] = '\n';
		arg++;
	}
	return (args);
}
