/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_to_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:04:21 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void		copy_path(t_string **lst, char *path, size_t size);

/*
 * Fn		: path_to_lst(char *path)
 * Scope	: convert PATH from string to list
 * Input	: char * - PATH var
 * Output	: t_string *
 * Errors	: NULL - PATH is NULL, or could not convert
 * Uses		: call_execve (call_execve.c)
 */

t_string	*path_to_lst(char *path)
{
	t_string		*lst;
	unsigned int	i;

	if (!path)
		return (NULL);
	lst = NULL;
	while (*path)
	{
		i = 0;
		while (path[i] && path[i] != ':')
			i++;
		copy_path(&lst, path, i);
		path += i;
		if (*path)
			path++;
	}
	return (lst);
}

static void	copy_path(t_string **lst, char *path, size_t size)
{
	char	*str;

	str = ft_substr(path, 0, size);
	ft_stradd_back(lst, ft_strnew(str, size));
}
