/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:06:25 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_shell(t_shell *data)
{
	if (data->line)
		free(data->line);
	if (data->lst_token)
		clear_token(&data->lst_token);
	if (data->lst_sentence)
		clear_sentence(&data->lst_sentence);
	if (data->pipes)
		clear_pipe(data);
	if (data->reds)
		free(data->reds);
	init_shell(data);
}
