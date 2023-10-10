/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:37:37 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:03:11 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	args_size(char **args)
{
	int	size;

	size = 0;
	while (args[size])
		size++;
	return (size);
}
