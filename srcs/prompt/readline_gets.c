/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readline_gets.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:07:14 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: readline_gets(char *line)
 * Scope	: get the output from readline() into buffer *line
 *			: if *line is not NULL, free it
 * Input	: char * - buffer
 * Output	: char * - return from readline
 * Errors	: not applicable
 * Uses		: main() [main.c]
 */

char	*readline_gets(char *line)
{
	if (line)
		free(line);
	line = NULL;
	line = readline("minishell > ");
	return (line);
}
