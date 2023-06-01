/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:03:17 by jalves-p          #+#    #+#             */
/*   Updated: 2023/02/14 15:47:19 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ar;

	i = 0;
	ar = (int *)malloc(((max - min) * sizeof(int)) + 1);
	if (min >= max)
		return (0);
	else
	{
		while (min != max)
		{
			ar[i] = min;
			i++;
			min++;
		}
	}
	return (ar);
}
