/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:51:04 by maltinka          #+#    #+#             */
/*   Updated: 2023/02/11 13:12:17 by maltinka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **av, int i)
{
	char	*max;
	int		n;

	n = 0;
	while (av[i][n] || av[i + 1][n])
	{
		if (av[i][n] > av[i + 1][n])
		{
			max = av[i + 1];
			av[i + 1] = av[i];
			av[i] = max;
			break ;
		}
		if (av[i][n] == av[i + 1][n])
			n++;
		if (av[i][n] < av[i + 1][n])
			break ;
	}
}

int	main(int ac, char **av)
{
	int		n;
	int		i;
	int		j;

	n = 1;
	while (n < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			swap(av, i);
			i++;
		}
		n++;
	}
	n = 1;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
			write(1, &av[n][j++], 1);
		n++;
		write(1, "\n", 1);
	}
}
