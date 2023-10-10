/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:14:07 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:22:16 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	index;
	int	signal;

	number = 0;
	index = 0;
	signal = 1;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			signal *= -1;
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		number = number + (str[index] - '0');
		index++;
		if (ft_isdigit(str[index]))
			number = number * 10;
	}
	return (signal * number);
}
