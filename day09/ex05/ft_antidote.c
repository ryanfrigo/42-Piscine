/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:03:28 by dfinnis           #+#    #+#             */
/*   Updated: 2018/08/31 11:03:30 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i > j)
	{
		if (i < k)
			return (i);
		if (j > k)
			return (j);
		else
			return (k);
	}
	else
	{
		if (i > k)
			return (i);
		if (k > j)
			return (j);
		else
			return (k);
	}
}
