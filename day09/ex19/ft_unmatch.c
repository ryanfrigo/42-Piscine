/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:49:46 by dfinnis           #+#    #+#             */
/*   Updated: 2018/08/31 12:49:53 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int	a;
	int	b;
	int nopair;

	a = 0;
	while (a < length)
	{
		b = 0;
		nopair = 1;
		while (b < length)
		{
			if (a != b && tab[a] == tab[b])
				nopair++;
			b++;
		}
		if (nopair % 2 != 0)
			return (tab[a]);
		a++;
	}
	return (0);
}
