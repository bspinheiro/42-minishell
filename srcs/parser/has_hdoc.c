/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_hdoc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:04:45 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	init_cmd(t_sentence *cmd)
{
	cmd->args = NULL;
	cmd->fd_i = 0;
	cmd->fd_o = 1;
	cmd->previous = NULL;
	cmd->next = NULL;
}

void	has_hdoc(t_token *lst)
{
	t_token		*tmp;
	t_sentence	cmd;
	char		*file;
	t_env		*env;

	tmp = lst;
	env = NULL;
	while (tmp->previous)
	{
		tmp = tmp->previous;
		if (tmp->tkn == HDOC)
			break ;
	}
	if (tmp && tmp->tkn == HDOC && tmp->next && tmp->next->tkn == WORD)
	{
		file = ft_strdup(tmp->next->word);
		init_cmd(&cmd);
		heredoc(&cmd, file, env);
		free (file);
	}
}
