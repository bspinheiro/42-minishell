/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_global.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:00:19 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*get_global(char *var, int size)
{
	char	*value;
	char	*rest;

	value = ft_itoa(g_global);
	if (size == 0)
		return (value);
	else
	{
		rest = ft_substr(var, 1, size);
		value = ft_strjoin_free(value, rest);
		free(rest);
		return (value);
	}
}
