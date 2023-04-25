/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:48:45 by maltinka          #+#    #+#             */
/*   Updated: 2023/02/11 12:49:16 by maltinka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;

	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar (num1 / 10 + '0');
			ft_putchar (num1 % 10 + '0');
			ft_putchar (' ');
			ft_putchar (num2 / 10 + '0');
			ft_putchar (num2 % 10 + '0');
			num2++;
			if (num1 != 98)
				write (1, ", ", 2);
		}
		num1++;
	}
}
