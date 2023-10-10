/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdelim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:05:02 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	isdelim(char c)
{
	const char	*delim = "|<>";

	while (*delim)
	{
		if (c == *delim)
			return (c);
		delim++;
	}
	return (0);
}
