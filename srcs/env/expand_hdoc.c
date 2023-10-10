/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_hdoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:59:44 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: expand_hdoc_var(char **sentence, t_env *env)
 * Scope	: call_expand_sentence for heredoc
 * Input	: char ** - array of strings
 *			: t_env * - list of environment variables
 * Output	: void
 * Errors	: not applicable
 * Uses		: create_sentences()
 */
void	expand_hdoc_var(char **sentence, t_env *env)
{
	*sentence = expand_sentence(sentence, env, 1);
}
