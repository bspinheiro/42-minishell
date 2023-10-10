/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix_slash.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:04:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: prefix_slash(char **str)
 * Scope	: add '/' to string
 * Input	: char ** - adrres of string
 * Output	: char * - the string
 * Errors	: NULL - string is NULL, or malloc error
 * Uses		: test_command (call_execve.c)
 */
char	*prefix_slash(char **str)
{
	char			*output;
	const size_t	len = ft_strlen(*str);

	if (!*str)
		return (NULL);
	output = malloc((len + 2) * sizeof(*output));
	if (!output)
		return (NULL);
	*output = '/';
	ft_memcpy(&output[1], *str, len + 1);
	free(*str);
	*str = NULL;
	*str = output;
	return (output);
}
