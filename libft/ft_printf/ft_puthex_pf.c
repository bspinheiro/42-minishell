/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:42:46 by izsoares          #+#    #+#             */
/*   Updated: 2023/07/11 18:49:48 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned int n)

{
	unsigned int	i;
	int				length;
	char			*x;

	i = 0;
	x = "0123456789abcdef";
	length = 0;
	if (n > 15)
		length += ft_puthex_pf(n / 16);
	i = n % 16;
	length += ft_putchar_pf(x[i]);
	return (length);
}
