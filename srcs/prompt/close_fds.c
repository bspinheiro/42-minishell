/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_fds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:06:07 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: close_fds(t_shell *data)
 * Scope	: run the array if pipes and reds fds and clse them
 * Input	: t_shell data
 * Output	: void
 * Errors	: n.a.
 * Uses		: executor
 */

void	close_fds(t_shell *data)
{
	int	i;

	i = 0;
	if (data->redirect_count > 0)
	{
		while (i < data->redirect_count)
		{
			close(data->reds[i]);
			i++;
		}
	}
	i = 0;
	if (data->pipe_count > 0)
	{
		while (i < data->pipe_count)
		{
			close (data->pipes[i][0]);
			close (data->pipes[i][1]);
			i++;
		}
	}
}
