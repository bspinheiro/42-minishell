/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_to_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:03:37 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**env_to_array(t_env *lst)
{
	t_env	*tmp;
	char	*env_str;
	char	**env_array;

	tmp = lst;
	env_str = NULL;
	while (tmp)
	{
		env_str = ft_strjoin_free(env_str, tmp->key);
		env_str = ft_strjoin_free(env_str, "=");
		env_str = ft_strjoin_free(env_str, tmp->value);
		env_str = ft_strjoin_free(env_str, "?");
		tmp = tmp->next;
	}
	env_array = ft_split(env_str, '?');
	free(env_str);
	return (env_array);
}
