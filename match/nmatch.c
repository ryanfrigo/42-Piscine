/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 11:23:51 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/01 13:27:25 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	int count;
	
	count = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		count += (nmatch(s1++, s2) || nmatch(s1, s2++) || nmatch(s1++, s2++));
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", nmatch(argv[1], argv[2]));
	else
		return (0);
}
