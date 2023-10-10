/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:11:45 by bda-silv          #+#    #+#             */
/*   Updated: 2023/07/11 22:33:14 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int n)
{
	int			digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		if (n == FT_LONG_MIN - 1)
			n = n + 1;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		digits++;
	}
	digits++;
	return (digits);
}

char	*ft_ltoa(long int n)
{
	char		*str;
	long		end;
	long int	aux_n;

	if (n == FT_LONG_MIN - 1)
		return (ft_strdup("-9223372036854775808"));
	end = ft_count(n);
	str = malloc((end + 1) * sizeof(char));
	if (!str)
		return (NULL);
	aux_n = n;
	if (aux_n < 0)
		aux_n = aux_n * -1;
	str[end] = '\0';
	end--;
	while (end >= 0)
	{
		str[end] = (aux_n % 10) + '0';
		aux_n = aux_n / 10;
		end--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
