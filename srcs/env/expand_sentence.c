/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_sentence.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:59:50 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: expand_sentence(char **sentence, t_env *env)
 * Scope	: reads a string and applies expansions.
 *				The old string, if expanded, is released
 * Input	: char ** - string address
 *			: t_env * - list of environment variables
 * Output	: char * - a new allocated string with the expansions applied;
 *			:		 - the unmodified string if no expansion found
 * Errors	: not applicable
 * Uses		: expandvars()
 */
char	*expand_sentence(char **sentence, t_env *env, int hdoc)
{
	char		*new;
	char		*old;
	t_string	*tmp;

	old = *sentence;
	tmp = scan_sentence(old, env, hdoc);
	if (!tmp)
		return (old);
	new = ft_lst_to_str(tmp);
	ft_strclear(&tmp, free);
	free(old);
	return (new);
}
