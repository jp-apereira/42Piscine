/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:52:49 by jalves-p          #+#    #+#             */
/*   Updated: 2023/02/04 13:56:41 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

void	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	ft_str_is_alpha(str);
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	a = 1;
	while (str[a])
	{
		if (str[a - 1] <= 47 || (str[a - 1] >= 58 && str[a - 1] <= 64)
			|| (str[a - 1] >= 91 && str[a - 1] <= 96) || str[a - 1] >= 123)
		{
			if (str[a] >= 97 && str[a] <= 122)
			{
				str[a] = str[a] - 32;
			}
		}
		a++;
	}
	return (str);
}
