/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:42:35 by dfinnis           #+#    #+#             */
/*   Updated: 2018/08/31 10:42:39 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_rot_42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			ft_putchar(str[i] + 16);
		else if (str[i] >= 'K' && str[i] <= 'Z')
			ft_putchar(str[i] - 10);
		else if (str[i] >= 'a' && str[i] <= 'j')
			ft_putchar(str[i] + 16);
		else if (str[i] >= 'k' && str[i] <= 'z')
			ft_putchar(str[i] - 10);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot_42(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
