/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walk_hdoc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:02:40 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	walk_hdoc(char *str, t_string **output, int index)
{
	int	i;

	i = 2;
	if (!str[i + index])
	{
		stash_string(output, str, i + index);
		return (i);
	}
	while (ft_isspace(str[i + index]))
		i++;
	while (str[i + index] && !ft_isspace(str[i + index]))
		i++;
	if (!output)
		stash_string(output, str, i + index);
	else
		stash_string(output, &str[index], i);
	return (i);
}
