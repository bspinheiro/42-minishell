/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_quotes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:02:48 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_quotes	which_quotes(char c)
{
	if (c == '\'')
		return (SINGLE);
	if (c == '\"')
		return (DOUBLE);
	return (NONE);
}
