/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_quote_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:08:15 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: no_quote_size(char *str)
 * Scope	: counts bytes that aren't quotes

 * Input	: the string that is being scanned
 * Output	: the number of bytes that aren't quotes
 * Errors	: not applicable
 *
 * Uses		: rem_str_quotes() and while_no_quotes()
 */

int	no_quote_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\'' && str[i] != '\"')
		i++;
	return (i);
}
