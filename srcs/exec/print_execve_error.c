/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_execve_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:04:36 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_execve_error(char *str, int error)
{
	if (error == EACCES)
	{
		ft_putstr_fd("minishell: ", 2);
		ft_putstr_fd(str, 2);
		ft_putstr_fd(": ", 2);
		ft_putendl_fd(strerror(errno), 2);
		g_global = 126;
	}
	else
	{
		ft_putstr_fd(str, 2);
		ft_putendl_fd(": command not found", 2);
		g_global = 127;
	}
}
