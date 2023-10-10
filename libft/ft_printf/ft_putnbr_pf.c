/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:42:46 by izsoares          #+#    #+#             */
/*   Updated: 2023/07/11 18:50:07 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	long int	nbr;
	int			length;

	length = 0;
	nbr = n;
	if (nbr < 0)
	{
		length += ft_putchar_pf('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
		length += ft_putnbr_pf(nbr / 10);
	length += ft_putchar_pf((nbr % 10) + '0');
	return (length);
}
