/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:29:47 by jalves-p          #+#    #+#             */
/*   Updated: 2023/02/08 12:20:30 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long int	num;

	num = 1;
	if (nb == 0)
		return (0);
	while (num * num < nb)
		num++;
	if (num * num == nb)
		return (num);
	else
		return (0);
}
