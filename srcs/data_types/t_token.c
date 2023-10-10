/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_token.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:59:26 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_token	*find_last_token(t_token *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_token	*new_token(char *ptr, t_tkn t)
{
	t_token		*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->tkn = t;
	new->word = ptr;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}

void	addback_token(t_token **lst, t_token *new)
{
	t_token	*tmp;

	if (!*lst)
		*lst = new;
	else
	{
		tmp = find_last_token(*lst);
		tmp->next = new;
		new->previous = tmp;
	}
}

void	clear_token(t_token **lst)
{
	t_token	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp->word);
		free(tmp);
		tmp = NULL;
	}
}
