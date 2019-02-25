/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:22:09 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/22 20:10:26 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_char(char c);

void	ft_print_comb(void)
{
	int arr[3];

	arr[0] = '0';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_put_char(arr[0]);
				ft_put_char(arr[1]);
				ft_put_char(arr[2]);
				if (!(arr[0] == '7' && arr[1] == '8' && arr[2] == '9'))
				{
					ft_put_char(',');
					ft_put_char(' ');
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
