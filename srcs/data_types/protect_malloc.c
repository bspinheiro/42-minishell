/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protect_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:59:03 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Input			:void *arg - argument can be of any type
 * Scope			:checks whether dynamic memory allocation has occurred
 * Output			:none
 * 					:or
 * 					:error and exit
 */
void	protect_malloc(void *arg)
{
	if (arg == NULL)
	{
		printf("%s\n", strerror(errno));
		exit(errno);
	}
}
