/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:19:16 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/23 16:50:07 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strrev(char *str)
{
	char trsf;
	int pos;
	int len;

	pos = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	len = len - 1;

	char rev[len];

	while (str[pos])
	{
		trsf = str[len];
		rev[pos] = trsf;
		pos++;
		len--;
	}
	return(rev);
}
