/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_entry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:59:56 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	get_entry(char **key, char **value, char *var, int len)
{
	int	i;

	i = 0;
	while (var[i] && var[i] != '=')
		i++;
	*key = ft_substr(var, 0, i);
	if (var[i])
		i++;
	*value = ft_substr(var, i, len - i);
	if (*value && !**value)
	{
		free(*value);
		*value = NULL;
	}
}
