/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_buf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:06:31 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strlen_buf(const char *s)
{
	int	length;

	length = 0;
	while (s[length])
	{
		length++;
		if (length > BUFLIM)
			return (1);
	}
	return (0);
}

void	check_buf(char **str)
{
	if (!*str)
		return ;
	if (ft_strlen_buf(*str))
	{
		free(*str);
		*str = NULL;
	}
}
