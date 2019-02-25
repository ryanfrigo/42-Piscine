/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:38:59 by rfrigo            #+#    #+#             */
/*   Updated: 2018/09/03 19:20:07 by rfrigo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' 
			|| *str == '\n' || *str == '\r' || *str == '\f' 
			|| *str == '+')
			str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int		ft_calculate(int num1, char op, int num2)
{
	if (op == '+')
		return (num1 + num2);
	if (op == '-')
		return (num1 - num2);
	if (op == '*')
		return (num1 * num2);
	if (op == '/')
		return (num1 / num2);
	if (op == '%')
		return (num1 % num2);
	return (0);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + 48;
		write(1, &n, 1);
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		num1;
	int		num2;
	char	*op;

	i = 0;
	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		op = argv[2];

		if (num2 == 0)
		{
			if (op[0] == '/')
				write(1, "Stop : division by zero\n", 24);
			if (op[0] == '%')
				write(1, "Stop : modulo by zero\n", 22);
		}
		ft_putnbr(ft_calculate(num1, op[0], num2));
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
