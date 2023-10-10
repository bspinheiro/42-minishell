/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:16:58 by dmatavel          #+#    #+#             */
/*   Updated: 2023/07/11 18:58:09 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_lst_to_str(t_string *lst)
{
	char	*str;
	size_t	length;
	int		i;

	length = ft_strtotallen(lst);
	if (!length)
		return (NULL);
	str = malloc((length + 1) * sizeof(*str));
	str[length] = '\0';
	i = 0;
	while (lst)
	{
		if (lst->content)
			ft_memcpy(&str[i], lst->content, lst->length);
		i += lst->length;
		lst = lst->next;
	}
	return (str);
}
