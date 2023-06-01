/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:05:30 by jalves-p          #+#    #+#             */
/*   Updated: 2023/01/31 15:38:32 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *x, int *y)
{
	int	trq;

	trq = *x;
	*x = *y;
	*y = trq;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= (size - 1))
	{
		j = i + 1;
		while (tab[j] != tab[size])
		{
			while (tab[i] > tab[j])
			{
				swap(&tab[j], &tab[i]);
			}
			j++;
		}
		i++;
	}
}
