/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_delim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:05:39 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_tkn	which_delim(char *delim)
{
	char	c;

	c = *delim;
	if (!isdelim(c))
		return (ERROR);
	if (c == '|')
		return (PIPE);
	if (c == '>')
	{
		if (*(delim + 1) == c)
			return (APPEND);
		return (OUT);
	}
	if (c == '<')
	{
		if (*(delim + 1) == c)
			return (HDOC);
		return (IN);
	}
	return (ERROR);
}
