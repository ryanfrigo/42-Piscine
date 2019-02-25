/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 15:27:53 by rfrigo            #+#    #+#             */
/*   Updated: 2018/08/26 21:38:39 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sastantua(int size)
{
	int rows_per_lvl;
	int door_height;
	int lvl_count;
	int col;
	int layer;

	lvl_count = 0;
	col = 0

	rows_per_lvl = size + 2;

	/*door height*/	
	if (rows_per_lvl % 2 == 0)
		door_height = size - 1;
	else
		door_height = size;

	/*lvl offset*/
	if (rows_per_lvl % 2 == 1)


	

	while (lvl_count++ < size)
	{
		/*normal level*/
		layer = 0;
		while (layer++ < rows_per_lvl)
		{

		/*door level*/
		if (lvl_count == size)
		{
		}
	}
}
