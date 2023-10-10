/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:58:03 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	freetab(void **ptr)
{
	char	**tmp;
	int		i;

	if (!ptr)
		return ;
	i = 0;
	tmp = (char **)ptr;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(ptr);
}

void	free_array(char **tab)
{
	size_t	i;
	char	*s;

	i = 0;
	while (tab[i])
	{
		s = tab[i];
		free(s);
		i++;
	}
	free(tab);
	tab = NULL;
}
