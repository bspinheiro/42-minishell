/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:15:27 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:55:06 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H
# include "types.h"

typedef enum e_quotes
{
	NONE,
	SINGLE,
	DOUBLE,
}	t_quotes;

typedef struct s_repl
{
	t_quotes	quote;
	char		*old;
	int			old_sz;
	char		*new;
	int			new_sz;
}	t_repl;

void		get_entry(char **key, char **value, char *var, int len);

// Var expansion
char		*expand_sentence(char **sentence, t_env *env, int hdoc);
t_string	*scan_sentence(char *sentence, t_env *env, int hdoc);
char		*get_value(char *var, int size, t_env *env);
t_quotes	which_quotes(char c);

#endif
