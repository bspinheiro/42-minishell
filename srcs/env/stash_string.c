/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stash_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 19:00:48 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
 * Fn		: stash_string(t_string **lst, char *sentence, int size)
 * Scope	: stores the string up to the character before $
 * Uses		: split_sentence()
 */
void	stash_string(t_string **lst, char *sentence, int size)
{
	char	*to_stash;

	to_stash = ft_substr(sentence, 0, size);
	if (to_stash && *to_stash)
		ft_stradd_back(lst, ft_strnew(to_stash, size));
}
