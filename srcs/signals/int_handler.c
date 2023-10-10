/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:12:31 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: int_handler(int signum)
 * Scope	: handler for INTERRUPT signal (Ctrl+C)
 * Input	: int - signal
 * Output	: void
 * Errors	: not applicable
 * Uses		: main() [main.c]
 */
void	int_handler(int signum)
{
	if (RL_ISSTATE(RL_STATE_READCMD))
		ioctl(1, TIOCSTI, "\n");
	else
		write(1, "\n", 1);
	rl_on_new_line();
	rl_replace_line("", 0);
	g_global = 130;
	(void)signum;
}
