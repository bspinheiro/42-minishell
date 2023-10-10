/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counting_redirects.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:07:24 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	counting_redirects(t_token **lst_token)
{
	t_token	*tmp;
	int		count;

	tmp = *lst_token;
	count = 0;
	if (!tmp)
		return (0);
	while (tmp)
	{
		if (tmp->tkn > PIPE)
			count++;
		tmp = tmp->next;
	}
	return (count);
}
