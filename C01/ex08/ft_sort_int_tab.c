/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltinka <maltinka@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:31:38 by maltinka          #+#    #+#             */
/*   Updated: 2023/02/16 16:31:40 by maltinka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
	size--;
	}
}
int main()
{
	int tab[5]={2, 4, 8, 7, 6};
	int size = 5;

	ft_sort_int_tab(tab, size);

	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}

