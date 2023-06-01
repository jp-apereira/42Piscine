/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:28:03 by jalves-p          #+#    #+#             */
/*   Updated: 2023/02/06 15:11:59 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		res = 0;
	if (power == 0)
	{
		res = 1;
	}
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
