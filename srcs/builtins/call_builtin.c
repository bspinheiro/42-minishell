/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_builtin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:34 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:13:23 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
/*
 * Fn		: call_builtin(char **args, t_shell *data, t_builtin builtin)
 * Scope	: set arguments and call builtin
 * Input	: char ** - command arguments
 *			: t_shell * - pointer to global struct
 *			: t_builtin - builtin to call
 * Output	: int - same return as builtin
 * Errors	: same as builtin
 * Uses		: exec_command(); exec_one [executor.c];
 */
int	call_builtin(char **args, t_shell *data, t_builtin builtin)
{
	const int	size = args_size(args);

	if (builtin == ECHO)
		return (echo(args, 1));
	if (builtin == CD)
		return (cd(size, args, data));
	if (builtin == PWD)
		return (pwd(1));
	if (builtin == EXPORT)
		return (export(size, args, &data->lst_env));
	if (builtin == UNSET)
		return (unset(size, args, &data->lst_env));
	if (builtin == ENV)
	{
		env(data->lst_env);
		return (0);
	}
	if (builtin == EXIT)
		ft_exit(args, data, size);
	return (0);
}
