/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinka <maltinka@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:31:15 by maltinka          #+#    #+#             */
/*   Updated: 2023/02/16 16:31:17 by maltinka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
int main()
{
	int tab[5]={2, 4, 6, 7, 6};
	int size = 5;

	ft_rev_int_tab(tab, size);

	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	}
